#pragma once
#include "QueueArrtibutes.h"

struct QueueList
{
	Queue* pHead;
	Queue* pTail;
};


Queue* Enqueue(QueueList& queue, const int num);
void UserInfo(QueueList& queue);
void PrintQueue(QueueList& queue);
void Dequeue(QueueList& queue);