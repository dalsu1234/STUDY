#include <iostream>
#include <string.h>
#include "toString.h"

String::String()
{
	mString = new char[1];
	mString[0] = '\0';
	mLength = 0;
}

String::String(const int index)
{
	mString = new char[index+1];
	mString[0] = '\0';
	mLength = index;
}

String::String(const char* string) : String(strlen(string))
{
	strcpy_s(mString, strlen(string)+1, string);
}

String::String(const String& instance)
{
	mLength = instance.mLength;
	mString = new char[mLength+1];
	for (int i = 0; i < mLength; i++)
	{
		mString[i] = instance.mString[i];
	}
	mString[mLength] = '\0';
}

char* String::GetString() const
{
	return mString;
}

int String::GetLength() const
{
	return mLength;
}



// 연산자 오버로딩


String String::operator+(const String& instance)
{
	int index = mLength + instance.mLength;
	String sumString(index);

	
	for (int i = 0; i < mLength; i++)
	{
		sumString.mString[i] = mString[i];
	}
	for (int i = 0; i < instance.mLength; i++)
	{
		sumString.mString[mLength + i] = instance.mString[i];
	}
	sumString.mString[index] = '\0';
	return sumString;
}

String& String::operator=(const String& instance)
{
	mLength = instance.mLength;
	mString = new char[mLength+1];
	for (int i = 0; i < mLength; i++)
	{
		mString[i] = instance.mString[i];
	}
	mString[mLength] = '\0';
	return *this;
}

String& String::operator+=(const String& instance)
{
	
	String st(mLength + instance.mLength);

	st = *this + instance;
	*this = st;
	return *this;
	
}

char& String::operator[](int index) const
{
	return mString[index];
}








std::ostream& operator<<(std::ostream& os, const String& string)
{
	os << string.mString;
	return os;
}
