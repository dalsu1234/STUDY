#include <iostream>
#include <cstring>// strcpy_c 함수를 쓰기위한 헤더
#include "LinkedList.h"
Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* pNew = new Monster{}; // 초기화 안해주면 쓰레기값으로 넘어간다 // pNew는 새로운 포인터구조체 선언 


	//pNew->name = name; 문자열은 배열이라 안된다 이런식은
	
	strcpy_s(pNew->name, NAME_LENGTH, name);
	pNew->HP = hp;
	//pNew->pNext = nullptr;  // 위에서 초기화 안해줄거면 이런식으로 초기화 해주면됨
	
	if (list.pTail == nullptr)// CreateMonster함수의 매개변수인 list
	{
		list.pHead = pNew;
		//list.pTail = pNew;

	}
	else
	{
		list.pTail->pNext = pNew;
		//list.pTail = pNew;
	}

	list.pTail = pNew; // if와 else 둘다 겹쳐 있기떄문에 이런식으로 밖으로 빼와서 써도 됨



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
