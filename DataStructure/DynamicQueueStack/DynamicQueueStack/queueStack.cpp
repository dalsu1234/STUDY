#include "check.h"
#include <iostream>

Attribute_QS* Create(Check_QS& check, const int num)
{
	Attribute_QS* pNew = new Attribute_QS{};

	pNew->num = num;
	if (check.firstCheck == nullptr)
	{
		check.firstCheck = pNew;
	}
	else
	{
		check.lastCheck->pNext = pNew;
		pNew->pPrev = check.lastCheck;
	}
	
	check.lastCheck = pNew;

	return pNew;
}

void StackPrint(Check_QS& check)
{
	Attribute_QS* p = check.lastCheck;

	while (p != nullptr)
	{
		std::cout << p->num << std::endl;
		p = p->pPrev;
	}
	std::cout << "========================" << std::endl;
}

void QueuePrint(Check_QS& check)
{
	Attribute_QS* p = check.firstCheck;

	if (p == nullptr)
	{
		std::cout << "empty!!" << std::endl;
		return;
	}
	while (p != nullptr)
	{
		std::cout << p->num << "   ";
		p = p->pNext;
	}
	std::cout << std::endl;
	std::cout << "========================" << std::endl;
}

void UserInfoQueueStack(Check_QS& check)
{
	int select{};
	bool isExit{false};
	while (true)
	{
		std::cout << "[1]Queue" << std::endl <<
					 "[2]Stack" << std::endl <<
					 "[3]EXIT" << std::endl;
		std::cin >> select;
		std::cout << "========================" << std::endl;
		switch (select)
		{
			case 1:
				UserInfoQueue(check);
				break;

			case 2:
				UserInfoStack(check);
				break;

			case 3:
				isExit = true;
				break;

			default:
				std::cout << "�߸��� �Է��Դϴ�." << std::endl;
				break;
		}
		if (isExit)
		{
			break;
		}
	}
}
void UserInfoQueue(Check_QS& check)
{
	int select{};
	bool isExit{ false };
	while (true)
	{
		std::cout << "[1]����" << std::endl <<
					 "[2]����" << std::endl <<
					 "[3]EXIT" << std::endl;
		std::cin >> select;
		std::cout << "========================" << std::endl;
		switch (select)
		{
		case 1:
		{
			int value{};
			std::cout << "�� �Է�" << std::endl
			<< "    >> " << std::endl;
			std::cin >> value;
			std::cout << "========================" << std::endl;
			Create(check, value);
			break;
		}
		case 2:
			QueueDelete(check);
			break;

		case 3:
			isExit = true;
			break;

		default:
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
			break;
		}
		QueuePrint(check);
		if (isExit)
		{
			break;
		}
		
	}

}

void UserInfoStack(Check_QS& check)
{
	int select{};
	bool isExit{ false };
	while (true)
	{
		std::cout << "[1]����" << std::endl <<
			"[2]����" << std::endl <<
			"[3]EXIT" << std::endl;
		std::cin >> select;
		std::cout << "========================" << std::endl;
		switch (select)
		{
		case 1:
		{
			int value{};
			std::cout << "�� �Է�" << std::endl
				<< "    >> " << std::endl;
			std::cin >> value;
			std::cout << "========================" << std::endl;
			Create(check, value);
			
			break;
		}
		case 2:
			StackDelete(check);
			break;

		case 3:
			isExit = true;
			break;

		default:
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
			break;
		}
		if (isExit)
		{
			break;
		}
		StackPrint(check);
	}
}

void QueueDelete(Check_QS& check)
{
	Attribute_QS* pTemp{};
	Attribute_QS* p{};

	p = check.firstCheck;
	pTemp = check.firstCheck->pNext;
	delete p;
	p = nullptr;
	check.firstCheck = pTemp;
	if (check.firstCheck == nullptr)
	{
		check.firstCheck = nullptr;
		check.lastCheck = nullptr;
	}

}
void StackDelete(Check_QS& check)
{
	Attribute_QS* pTemp{};
	Attribute_QS* p{};

	p = check.lastCheck;
	pTemp = check.lastCheck->pPrev;
	delete p;
	p = nullptr;
	check.lastCheck = pTemp;
	if (check.lastCheck == nullptr)
	{
		check.firstCheck = nullptr;
		check.lastCheck = nullptr;
	}

}
