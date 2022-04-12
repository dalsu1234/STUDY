#pragma once
#include "LinkedLest.h"
class Queue :
    public LinkedList
{
	int mHead;
public:
	Queue();
	Queue(int size);
	~Queue();

	void InputNum(int num) override;
	void ExitNum() override;
	void PrintInfo() override;
	void Print() override;
};

