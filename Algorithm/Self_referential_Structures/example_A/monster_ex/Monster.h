#pragma once

const int NAME_LENGTH{ 16 };

struct Monster
{
	char name[NAME_LENGTH];
	int HP;

	Monster* pNext;
};
