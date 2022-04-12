#include <iostream>
#include "Stack.h"

Stack::Stack() : LinkedList(){}

Stack::Stack(int size) : LinkedList(size){}

void Stack::InputNum(int num)
{
	mArr[mIndex++] = num;
}

void Stack::ExitNum()
{
	if (mIndex-1 < 0)
	{
		std::cout << "불가능!";
		return;
	}
	else if (mIndex-1 == 0)
	{
		std::cout << "비어있음";
	}
	mArr[mIndex--] = NULL;
}

void Stack::PrintInfo()
{
	int n{0};
	bool isExit = true;
	while (isExit)
	{
		std::cout << "[1] PUSH " << std::endl;
		std::cout << "[2] POP " << std::endl;
		std::cout << "[3] EXIT " << std::endl;
		std::cin >> n;
		switch (n)
		{
		case 1:
			std::cout << "값 입력 : ";
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

void Stack::Print()
{

	for (int i = 0; i < mIndex; i++)
	{
		std::cout << mArr[i];
	}
	std::cout << std::endl;

}
