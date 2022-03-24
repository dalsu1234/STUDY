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

//CreateMonster(MonsterList list, ) �ݹ��̹��

// Operation
// ����
// ������ ���� (��ȸ)
// ��ü ����Ʈ ����
// Ư�� ���� ����
