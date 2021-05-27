#include "StaticDeque.h"

StaticDeque Create()
{
	StaticDeque queue =
	{-1, 0, 0, { 0 }};
	// {front, rear, count, values array}
	return queue;
}

bool InsertFront(StaticDeque& deque, char elem)
{
	if (deque.count == Size(deque))
	{
		return false;
	}

	if (deque.front == -1) {
		deque.front = 0;
		deque.rear = 0;
	}
	else if (deque.front == 0) {
		deque.front = STATIC_QUEUE_CAPACITY - 1;
	}
	else {
		deque.front--;
	}

	deque.values[deque.front] = elem;

	++deque.count;

	return true;
}


bool InsertBack(StaticDeque& deque, char elem)
{
	if (deque.count == Size(deque))
	{
		return false;
	}

	if (deque.front == -1)
	{
		deque.front = 0;
		deque.rear = 0;
	}
	else if (deque.rear == STATIC_QUEUE_CAPACITY - 1) {
		deque.rear = 0;
	}
	else {
		deque.rear++;
	}

	deque.values[deque.rear] = elem;

	++deque.count;

	return true;
}


char RemoveFront(StaticDeque& deque)
{
	if (IsEmpty(deque))
	{
		return '\0';
	}

	char value = deque.values[deque.front];

	if (deque.front == deque.rear)
	{
		deque.front = -1;
		deque.rear = -1;
	}
	else {
		if (deque.front == STATIC_QUEUE_CAPACITY - 1) {
			deque.front = 0;
		}
		else {
			deque.front++;
		}
	}

	return value;
}

char RemoveRear(StaticDeque& deque)
{
	if (IsEmpty(deque))
	{
		return '\0';
	}

	char value = deque.values[deque.rear];

	if (deque.front == deque.rear)
	{
		deque.front = -1;
		deque.rear = -1;
	}
	else if (deque.rear == 0) {
			deque.rear = STATIC_QUEUE_CAPACITY - 1;
	}
	else {
			deque.rear = deque.rear - 1;
	}

	return value;
}


char Front(const StaticDeque& deque)
{
	return IsEmpty(deque) ? '\0' : deque.values[deque.front];
}

char Back(const StaticDeque& deque)
{
	return IsEmpty(deque) ? '\0' : deque.values[deque.rear];
}


int Size(const StaticDeque& deque)
{
	return sizeof(deque.values) / sizeof(deque.values[0]);
}


int Count(const StaticDeque& deque)
{
	return deque.count;
}


bool IsEmpty(const StaticDeque& deque)
{
	return deque.count == 0;
}


bool Clear(StaticDeque& queue)
{
	while (!IsEmpty(queue))
	{
		RemoveRear(queue);
	}

	return IsEmpty(queue);
}
