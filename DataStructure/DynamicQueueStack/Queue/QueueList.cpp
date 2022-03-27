#include<iostream>
#include "QueueList.h"

Queue* Enqueue(QueueList& queue, const int num)
{
	Queue* pNew = new Queue{};
	pNew->num = num;

	if (queue.pHead == nullptr)
	{
		queue.pHead = pNew;
		//pNew->pPrev = queue.pHead;
	}
	else
	{
		queue.pTail->pNext = pNew;   //ex pNew adress 200
		//queue.pTail->pPrev = queue.pTail;// ex> ptail adress 100
		queue.pTail->pNext->pPrev = queue.pTail;
	}
	
	queue.pTail = pNew;
	
	return pNew;
}

void UserInfo(QueueList& queue)
{
	int index{ };
	int select{ };
	bool isExit{ false };
	QueueList x{};
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
			Enqueue(x, value);

			PrintQueue(x);
			break;
		}
		case 2:
			Dequeue(x);
			PrintQueue(x);
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

void Dequeue(QueueList& queue)
{
	Queue* pDel = queue.pHead;

	if (queue.pHead == nullptr)
	{
		std::cout << "�Ұ����մϴ�." << std::endl;
		return;
	}
	queue.pHead = pDel->pNext;
	delete pDel;
	pDel = nullptr;
}

void PrintQueue(QueueList& queue)
{
	Queue* pIndex = queue.pHead;

	if (pIndex == nullptr)
	{
		std::cout << "Empty!!" << std::endl;
	}
	while (pIndex != nullptr)
	{
		std::cout << pIndex->num << "  ";
		pIndex = pIndex->pNext;
	}
	std::cout << std::endl;
}
