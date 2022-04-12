#include <iostream>
#include "Queue.h"

Queue::Queue() : LinkedList(), mHead{0} {}


Queue::Queue(int size) : LinkedList(size), mHead{0}{}


void Queue::InputNum(int num)
{
	if (mSize <= mIndex)
	{
		std::cout << "�Ұ���" << std::endl;
		return;
	}
	mArr[mIndex++] = num;
}

void Queue::ExitNum()
{
	if (mHead > mSize-1)
	{
		std::cout << "�Ұ���!";
		return;
	}
	else if (mHead == mSize-1)
	{
		std::cout << "�������";
	}
	mArr[mHead++] = NULL;
}

void Queue::PrintInfo()
{
	int n{ 0 };
	bool isExit = true;
	while (isExit)
	{
		std::cout << "[1] ENQUEUE " << std::endl;
		std::cout << "[2] DEQUEUE " << std::endl;
		std::cout << "[3] EXIT " << std::endl;
		std::cin >> n;
		switch (n)
		{
		case 1:
			std::cout << "�� �Է� : ";
			std::cin >> mNum;
			InputNum(mNum);
			Print();
			break;
		case 2:
			ExitNum();
			Print();
			break;
		case 3:
			isExit = false;
			break;
		default:
			break;
		}
		if (isExit == false)
		{
			break;
		}
	}
}

void Queue::Print()
{
	for (int i = mHead; i < mIndex; i++)
	{
		std::cout << mArr[i];
	}
	std::cout << std::endl;
}
