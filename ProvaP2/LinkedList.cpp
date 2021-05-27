#include "LinkedList.h"

LinkedList* Create()
{
	LinkedList* list = new LinkedList({ 0, nullptr, nullptr });
	return list;
}

void Destroy(LinkedList* list)
{
	Clear(list);

	delete list;
	list = nullptr;
}

void Insert(LinkedList* list, int id, std::string name)
{
	// Circular.
	Node* node = CreateNode(id, name, list->tail, list->head);

	if (IsEmpty(list))
	{
		list->tail = node;
	}
	else
	{
		list->head->previous = node;
	}

	list->head = node;

	// Circular.
	list->tail->next = list->head;

	++list->count;
}

void Append(LinkedList* list, int id, std::string name)
{
	// Circular.
	Node* node = CreateNode(id, name, list->tail, list->head);

	if (IsEmpty(list))
	{
		list->head = node;
	}
	else
	{
		list->tail->next = node;
	}

	list->tail = node;

	// Circular.
	list->head->previous = list->tail;

	++list->count;
}

Node* RemoveHead(LinkedList* list)
{
	if (IsEmpty(list))
	{
		return nullptr;
	}

	Node* toRemove = list->head;

	if (list->head == list->tail)
	{
		list->head = list->tail = nullptr;
	}
	else
	{
		list->head = list->head->next;
		//list->head->previous = nullptr;

		// Circular.
		list->head->previous = list->tail;
		list->tail->next = list->head;
	}

	--list->count;

	toRemove->previous = toRemove->next = nullptr;
	return toRemove;
}

Node* RemoveTail(LinkedList* list)
{
	if (list->head == list->tail)
	{
		return RemoveHead(list);
	}

	Node* toRemove = list->tail;
	list->tail = list->tail->previous;
	//list->tail->next = nullptr;

	// Circular.
	list->tail->next = list->head;
	list->head->previous = list->tail;

	--list->count;

	toRemove->previous = toRemove->next = nullptr;
	return toRemove;
}

Node* RemoveNode(LinkedList* list, int id)
{
	Node* toRemove = GetNode(list, id);

	if (toRemove == list->head)
	{
		return RemoveHead(list);
	}
	else if (toRemove == list->tail)
	{
		return RemoveTail(list);
	}
	else if (toRemove != nullptr)
	{
		toRemove->previous->next = toRemove->next;
		toRemove->next->previous = toRemove->previous;

		--list->count;

		toRemove->previous = toRemove->next = nullptr;
		return toRemove;
	}

	return nullptr;
}

Node* GetHead(const LinkedList* list)
{
	return list->head;
}

Node* GetTail(const LinkedList* list)
{
	return list->tail;
}

Node* GetNode(const LinkedList* list, int id)
{
	Node* node = list->head;

	do
	{
		if (node->id == id)
		{
			return node;
		}
		node = node->next;
	} while (node != list->head);

	return nullptr;
}

int Count(const LinkedList* list)
{
	return list->count;
}

bool IsEmpty(const LinkedList* list)
{
	return list->head == nullptr && list->tail == nullptr;
}

void Clear(LinkedList* list)
{
	while (list->head != nullptr)
	{
		DestroyNode(RemoveHead(list));
	}
}

Node* CreateNode(int id, std::string name, Node* previous, Node* next)
{
	Node* node = new Node({ id, name, previous, next });
	return node;
}

void DestroyNode(Node* node)
{
	delete node;
	node = nullptr;
}

bool InsertBefore(LinkedList*list,int beforeId,int id,std::string name){

if (IsEmpty(list)){

    return false;

}

    Node* nodeBefore = GetNode(list, beforeId);

    if(nodeBefore != nullptr){

    Node* node = CreateNode(id, name, nullptr, nullptr);
    node->previous = nodeBefore->previous;
    node->next = nodeBefore;

    if(nodeBefore == list->head){

    list->head = node;

    }

        nodeBefore->previous->next = node;
        nodeBefore->previous = node;

        ++list->count;

        return true;
    }

    return false;

}

bool InsertAfter(LinkedList*list,int afterId,int id,std::string name){

if (IsEmpty(list)){

    return false;

}

Node* nodeAfter = GetNode(list, afterId);

    if (nodeAfter != nullptr){

    Node* node = CreateNode(id, name, nullptr, nullptr);
    node->previous = nodeAfter;
    node->next = nodeAfter->next;

    if(nodeAfter == list->tail){

        list->tail = node;

        }

        nodeAfter->next->previous = node;
        nodeAfter->next = node;

        ++list->count;

        return true;
    }

return false;

}
