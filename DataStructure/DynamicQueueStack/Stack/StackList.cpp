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
		//stack.pTop->pPrev = stack.pTop; �̰� �� �ƴұ� �ذ�

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

		std::cout << "[1] ���� �߰� " << std::endl <<
					 "[2] ���� ���� " << std::endl <<
					 "[3] ���� " << std::endl;
		std::cin >> select;
		std::cout << "============" << std::endl;
		switch (select)
		{
		case 1:
		{
			int value{};
			std::cout << "������ ���ڸ� �Է� " << std::endl
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
			std::cout << "�߸��� �Է�" << std::endl;
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
		std::cout << "�Ұ����մϴ�." << std::endl;
		return;
	}
	stack.pTop = pDel->pPrev;
	delete pDel;
	pDel = nullptr;
}
