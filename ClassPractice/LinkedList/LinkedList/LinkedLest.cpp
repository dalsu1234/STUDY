#include "LinkedLest.h"

LinkedList::LinkedList() : mSize{ 0 }, mArr{ nullptr }, mNum{ 0 }, mIndex{0}
{
}

LinkedList::LinkedList(int size) : mSize{size}
{
	mArr = new int[mSize];
	mNum = 0;
	mIndex = 0;
}

void LinkedList::InputNum(int num)
{
}

void LinkedList::ExitNum()
{
}

void LinkedList::PrintInfo()
{
}

void LinkedList::Print()
{
}
