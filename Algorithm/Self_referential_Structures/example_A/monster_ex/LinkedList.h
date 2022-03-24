#pragma once

#include "Monster.h"

//처음과 끝의 정보가 필요함
struct MonsterList
{
	Monster* pHead;
	Monster* pTail;
};


Monster* CreateMonster(MonsterList& list, const char* name, const int hp); //콜바이 레퍼런스
int GetCountMonsterList(const MonsterList& list);
void PrintMonsterList(const MonsterList& list);
void PrintListRecursive(Monster* monster);

Monster* FindMonster(const MonsterList& list, const char* name);

void DeleteAll(Monster& list);

//CreateMonster(MonsterList list, ) 콜바이밸류

// Operation
// 생성
// 원소의 개수 (순회)
// 전체 리스트 삭제
// 특정 원소 삭제
