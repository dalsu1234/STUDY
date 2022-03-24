#include <iostream>
#include "LinkedList.h"

int main()
{
	MonsterList myList{};// 초기화 안해주면 쓰레기 값 넘어감

	CreateMonster(myList, "Wolf", 10);
	CreateMonster(myList, "Demon", 20);
	CreateMonster(myList, "Slime", 30);// 잘 작동하나 싶으면 이쪽에 브레이크 걸고 디버그 걸면됨

	std::cout << GetCountMonsterList(myList) << std::endl;
	PrintListRecursive(myList.pHead);

	std::cout << ((FindMonster(myList, "Wolf") == nullptr) ? "not Found" : "Found") << std::endl;
}