#pragma once

const int NAME_LENGTH{ 16 };

struct Monster
{
	char name[NAME_LENGTH];
	int HP;

	Monster* pNext;
};


struct Monster2

{
	char name[NAME_LENGTH];
	int HP;

	Monster2* pNext;
	Monster2* pPrev;
};
