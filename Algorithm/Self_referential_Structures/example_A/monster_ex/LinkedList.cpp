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
