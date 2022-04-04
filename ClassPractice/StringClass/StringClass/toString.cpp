#include <iostream>
#include "toString.h"

String::String(const char* input)
{
	int index{};
	bool isExit{ true };
	while (isExit)
	{
		input[index++];
		if (input[index] == '\0')
		{
			isExit = false;
		}
	}
	mLetter = new char[index];
	for (int i = 0; i <= index; i++)
	{
		mLetter[i] = input[i];
	}

}

void String::Print()
{
	std::cout << mLetter << std::endl;
}
