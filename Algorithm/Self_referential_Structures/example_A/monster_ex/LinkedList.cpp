#include <iostream>
#include <cstring>// strcpy_c �Լ��� �������� ���
#include "LinkedList.h"
Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* pNew = new Monster{}; // �ʱ�ȭ �����ָ� �����Ⱚ���� �Ѿ�� // pNew�� ���ο� �����ͱ���ü ���� 


	//pNew->name = name; ���ڿ��� �迭�̶� �ȵȴ� �̷�����
	
	strcpy_s(pNew->name, NAME_LENGTH, name);
	pNew->HP = hp;
	//pNew->pNext = nullptr;  // ������ �ʱ�ȭ �����ٰŸ� �̷������� �ʱ�ȭ ���ָ��
	
	if (list.pTail == nullptr)// CreateMonster�Լ��� �Ű������� list
	{
		list.pHead = pNew;
		//list.pTail = pNew;

	}
	else
	{
		list.pTail->pNext = pNew;
		//list.pTail = pNew;
	}

	list.pTail = pNew; // if�� else �Ѵ� ���� �ֱ⋚���� �̷������� ������ ���ͼ� �ᵵ ��



	return pNew;
}

int GetCountMonsterList(const MonsterList& list)
{

	Monster* p = list.pHead;
	int count{};
	
	while (p != nullptr)
	{
		count++;
		p = p->pNext;
	}

	return count;
}

void PrintMonsterList(const MonsterList& list)
{
	Monster* p = list.pHead;
	
	while (p != nullptr)
	{
		std::cout << p->name << " : " << p->HP << std::endl;
		
		p = p->pNext;
	}
}


void PrintListRecursive(Monster* monster)
{
	//base
	if ( monster ==nullptr)
	{
		return;
	}
	//recursive
	std::cout << monster->name << " : " << monster->HP << std::endl;

	PrintListRecursive(monster->pNext);
}

Monster* FindMonster(const MonsterList& list, const char* name)
{
	for (Monster* p = list.pHead; p != nullptr; p = p->pNext)
	{
		if (strcmp(p->name, name) == 0)
		{
			return p;
		}
	}

	return nullptr;
}

bool Delete(MonsterList& list, const char* name)
{
	Monster* pCurrent = list.pHead;
	Monster* pPrevious{};

	while (pCurrent!= nullptr)
	{

		if (strcmp(pCurrent->name, name)==0)
		{
			break;
		}
		pPrevious = pCurrent;
		pCurrent = pCurrent->pNext;
	}

	if (pCurrent == nullptr)
	{
		return false;
	}

	if (list.pHead == list.pTail)
	{
		// ���� �ϳ��� ������
		list.pHead = list.pTail = nullptr;
		//delete pCurrent; �ߺ��Ȱ� ������ ����ؼ� �ѹ���
	}
	else if (list.pHead == pCurrent)
	{
		//ù��°����
		list.pHead = pCurrent->pNext;
		//delete pCurrent;
	}
	else if (list.pTail == pCurrent)
	{
		list.pTail = pPrevious;
		pPrevious->pNext = nullptr;
		//delete pCurrent;
		//����������
	}
	else
	{
		pPrevious->pNext = pCurrent->pNext;
		//delete pCurrent;
		//�߰��� ������
	}
	delete pCurrent;
	return false;
}

void DeleteAll(MonsterList& list)
{
	Monster* p = list.pHead;
	Monster* pNext{};
	while (p != nullptr)
	{
		pNext = p->pNext;
		delete p;

		p = p->pNext;
	}

	list.pHead = nullptr;
	list.pTail = nullptr;

}



/////////////////////////////



Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp)
{
	Monster2* pMon = new Monster2{};
	strcpy_s(pMon->name, NAME_LENGTH, name);

	if (list.pTail == nullptr)
	{
		list.pHead = pMon;
	}
	else
	{
		pMon->pPrev = list.pTail;
		list.pTail->pNext = pMon;

	}
	list.pTail = pMon;

	return pMon;
}

int GetCountMonsterList(const MonsterList2& list)
{
	return 0;
}

void PrintMonsterList(const MonsterList2& list)
{
}

void PrintListRecursive(Monster2* monster)
{
}

Monster2* FindMonster(const MonsterList2& list, const char* name)
{
	return nullptr;
}

void DeleteAll(Monster2& list)
{
}

bool Delete(MonsterList2& list, const char* name)
{
	Monster2* pCurrent = list.pHead;
	Monster2* pPrevious{};
	while (pCurrent != nullptr)
	{
		if (strcmp(pCurrent->name, name)==0)
		{
			break;
		}
		pPrevious = pCurrent;
		pCurrent = pCurrent->pNext;
	}
	if (pCurrent == nullptr)
	{
		return false;
	}
	if (list.pHead == list.pTail)
	{
		list.pHead = list.pTail = nullptr;
	}
	else if (list.pHead == pCurrent)
	{
		list.pHead = pCurrent->pNext;
	}
	else if (list.pTail == pCurrent)
	{
		list.pTail = pPrevious;
		pPrevious->pNext = nullptr;
	}
	else
	{
		pPrevious->pNext = pCurrent->pNext;
		//delete pCurrent;
		//�߰��� ������
	}
	delete pCurrent;
	return false;
}
