#include <iostream>
#include "StackList.h"
#include "StakcAttributes.h"
Stack* PushStack(StackList& stack, const int num)
{
	Stack* pNew = new Stack{};
	
	pNew->num = num;
	if (stack.pTop == nullptr)
	{
		stack.pBottom = pNew;
	}
	else
	{
		//stack.pBottom->pNext = pNew;
		//stack.pTop->pPrev = stack.pTop; 이게 왜 아닐까 해결

		pNew->pPrev = stack.pTop;
		stack.pTop->pNext = pNew;
	}
	stack.pTop = pNew;

	return pNew;
}

void UserInfoPrint(StackList& stack)
{
	int index{ };
	int select{ };
	bool isExit{false};
	StackList x{};
	
	while (true)
	{
		std::cout << "============" << std::endl;

		std::cout << "[1] 숫자 추가 " << std::endl <<
					 "[2] 숫자 삭제 " << std::endl <<
					 "[3] 종료 " << std::endl;
		std::cin >> select;
		std::cout << "============" << std::endl;
		switch (select)
		{
		case 1:
		{
			int value{};
			std::cout << "저장할 숫자를 입력 " << std::endl
				<< ">>  ";
			std::cin >> value;
			std::cout << "============" << std::endl;
			PushStack(x, value);
			
			PrintStack(x);
			break;
		}
		case 2:
			Delete(x);
			PrintStack(x);
			break;
		case 3:
			isExit = true;
			break;
		default:
			std::cout << "잘못된 입력" << std::endl;
			break;
			
		}
		if (isExit)
		{
			break;
		}
	}
	
	
}

void PrintStack(StackList& stack)
{
	Stack* pIndex = stack.pTop;

	if (pIndex == nullptr)
	{
		std::cout << "Empty!!" << std::endl;
	}
	while (pIndex != nullptr)
	{
		std::cout << pIndex->num << std::endl;
		pIndex = pIndex->pPrev;
	}
}

void Delete(StackList& stack)
{
	Stack* pDel = stack.pTop;
	
	if (stack.pTop == nullptr)
	{
		std::cout << "불가능합니다." << std::endl;
		return;
	}
	stack.pTop = pDel->pPrev;
	delete pDel;
	pDel = nullptr;
}
