#include <iostream>

#include "Cat.h"

void Cat::Meow()
{
	std::cout << "M" << std::endl;
}

int Cat::GetAge() const
{
	mAge = 1; // �Ұ���  ������ ���Լ��� ������ �Լ���


	return mAge;
}




