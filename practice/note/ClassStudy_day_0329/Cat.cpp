#include <iostream>

#include "Cat.h"

void Cat::Meow()
{
	std::cout << "M" << std::endl;
}

int Cat::GetAge() const
{
	mAge = 1; // 불가능  이유는 이함수는 상수멤버 함수라서


	return mAge;
}




