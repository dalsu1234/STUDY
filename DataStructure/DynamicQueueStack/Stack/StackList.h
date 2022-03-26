#pragma once
#include "StakcAttributes.h"

struct StackList
{
	Stack* pBottom;
	Stack* pTop;
};


Stack* PushStack(StackList& stack, const int num);
void UserInfoPrint(StackList& stack);
void PrintStack(StackList& stack);
void Delete(StackList& stack);