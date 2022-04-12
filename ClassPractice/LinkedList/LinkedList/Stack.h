#pragma once
#include "LinkedLest.h"
class Stack : public LinkedList
{
public:
	Stack();
	Stack(int size);
	~Stack();

	void InputNum(int num) override;
	void ExitNum() override;
	void PrintInfo() override;
	void Print() override;
};

