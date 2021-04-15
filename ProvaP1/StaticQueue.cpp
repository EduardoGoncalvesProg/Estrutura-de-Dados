//Eduardo Gonçalves 32028016

#include "StaticQueue.h"
#include "StaticStack.h"

using namespace DataStructures;

namespace DataStructures{

namespace Queue{

    StaticQueue Create(){

    StaticQueue fila ={Stack::Create(),Stack::Create(),0,0};

    return fila;
    }

    bool Enqueue(StaticQueue &queue, char elem){

        if (queue.count == Stack::STATIC_STACK_CAPACITY){

            return false;
            }

        else{

            Stack::Push(queue.PilhaPrimaria,elem);

            ++queue.count;

            return true;
        }
    }

    char Dequeue(StaticQueue &queue){

        if (Stack::IsEmpty(queue.PilhaPrimaria)){

        return '\0';
        }


        else{
            while (!Stack::IsEmpty(queue.PilhaPrimaria)){

            Stack::Push(queue.PilhaSecundaria,Stack::Pop(queue.PilhaPrimaria));
            }

            char var1 = Stack::Pop(queue.PilhaSecundaria);

            while (!Stack::IsEmpty(queue.PilhaSecundaria)){

            Stack::Push(queue.PilhaPrimaria,Stack::Pop(queue.PilhaSecundaria));
            }

            --queue.count;

            return var1;
        }

    }

    char Front(StaticQueue &queue){

    if (Stack::IsEmpty(queue.PilhaPrimaria)){

        return '\0';
    }

    else{

        while (!Stack::IsEmpty(queue.PilhaPrimaria)){

		Stack::Push(queue.PilhaSecundaria,Stack::Pop(queue.PilhaPrimaria));
        }

        char var2 = Stack::Top(queue.PilhaSecundaria);

        while (!Stack::IsEmpty(queue.PilhaSecundaria)){

		Stack::Push(queue.PilhaPrimaria,Stack::Pop(queue.PilhaSecundaria));

    }
        return var2;
    }
    }

    int Size(const StaticQueue &queue){

        return Stack::STATIC_STACK_CAPACITY;

    }

    int Count(const StaticQueue &queue){

        return queue.count;

    }

    bool IsEmpty(const StaticQueue &queue){

        return queue.count == 0;

    }

    bool Clear(StaticQueue &queue){

	while (!Stack::IsEmpty(queue.PilhaPrimaria)){

		Stack::Pop(queue.PilhaPrimaria);

		queue.count = 0;

	}

    return IsEmpty(queue);

    }
}
}
