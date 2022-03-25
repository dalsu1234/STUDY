#pragma once

#include "Monster.h"

//ó���� ���� ������ �ʿ���
struct MonsterList
{
	Monster* pHead;
	Monster* pTail;
};


Monster* CreateMonster(MonsterList& list, const char* name, const int hp); //�ݹ��� ���۷���
int GetCountMonsterList(const MonsterList& list);
void PrintMonsterList(const MonsterList& list);
void PrintListRecursive(Monster* monster);

Monster* FindMonster(const MonsterList& list, const char* name);

void DeleteAll(Monster& list);

bool Delete(MonsterList& list,const char* name);





struct MonsterList2
{
	Monster2* pHead;
	Monster2* pTail;
};


Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp); //�ݹ��� ���۷���
int GetCountMonsterList(const MonsterList2& list);
void PrintMonsterList(const MonsterList2& list);
void PrintListRecursive(Monster2* monster);
Monster2* FindMonster(const MonsterList2& list, const char* name);
void DeleteAll(Monster2& list);
bool Delete(MonsterList2& list, const char* name);


//CreateMonster(MonsterList list, ) �ݹ��̹��

// Operation
// ����
// ������ ���� (��ȸ)
// ��ü ����Ʈ ����
// Ư�� ���� ����
