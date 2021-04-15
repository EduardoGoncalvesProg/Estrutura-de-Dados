//Eduardo Gonçalves 32028016

#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__
#include "StaticStack.h"

namespace DataStructures
{
namespace Queue
{
	const int STATIC_QUEUE_CAPACITY = 32;

	struct StaticQueue
	{
        Stack::StaticStack PilhaPrimaria;
		Stack::StaticStack PilhaSecundaria;

		int front;
		int count;

	};

	StaticQueue Create();

	bool Enqueue(StaticQueue &queue, char elem);

	char Dequeue(StaticQueue &queue);

	char Front(StaticQueue &queue);

	int Size(const StaticQueue &queue);

	int Count(const StaticQueue &queue);

	bool IsEmpty(const StaticQueue &queue);

	bool Clear(StaticQueue &queue);

}
}

#endif // __STATIC_QUEUE_H__
