#ifndef STATIC_DEQUE_H
#define    STATIC_DEQUE_H

const int STATIC_QUEUE_CAPACITY = 32;

struct StaticDeque
{
    int front;
    int rear;
    int count;

    char values[STATIC_QUEUE_CAPACITY];
};

StaticDeque Create();

bool InsertFront(StaticDeque& deque, char elem);

bool InsertBack(StaticDeque& deque, char elem);

char RemoveFront(StaticDeque& deque);

char RemoveRear(StaticDeque& deque);

char Front(const StaticDeque& deque);

char Back(const StaticDeque& deque);

int Size(const StaticDeque& deque);

int Count(const StaticDeque& deque);

bool IsEmpty(const StaticDeque& deque);

bool Clear(StaticDeque& queue);

#endif
StaticDeque.h o de cima
