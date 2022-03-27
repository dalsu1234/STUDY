#pragma once
#include "attributes.h"

struct Check_QS
{
	Attribute_QS* firstCheck;
	Attribute_QS* lastCheck;
};

Attribute_QS* Create(Check_QS& check, const int num);
void StackPrint(Check_QS& check);
void QueuePrint(Check_QS& check);

void UserInfoQueueStack(Check_QS& check);
void UserInfoQueue(Check_QS& check);
void UserInfoStack(Check_QS& check);

void QueueDelete(Check_QS& check);
void StackDelete(Check_QS& check);