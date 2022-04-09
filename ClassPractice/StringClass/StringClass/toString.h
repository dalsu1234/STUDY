#pragma once
#include <iostream>
#include <string.h>


class String
{
private:
	int mLength;
	char* mString;
public:
	String(const char* string)
	{
		GetLength(string);
		GetString(string);
	}
	String() : mLength{ 0 }, mString{ nullptr } {}
	String(int size) : mLength{size}
	{
		mString = new char[mLength] {};
	}
	String(const String& instance) : mLength{ instance.mLength }, mString{nullptr}
	{
		int index{0};
		mString = new char[instance.mLength];
		if (instance.mString[0] == '\0')
		{
			mString[0] = '\0';
			return;
		}
		for (int i = 0; i < instance.mLength; i++)
		{
			mString[i] = instance.mString[i];
		}
		mString[instance.mLength] = '\0';
	}

	void GetString(const char* string)
	{
		GetLength(string);
		mString = new char[mLength];
		for (int i = 0; i < mLength; i++)
		{
			this->mString[i] = string[i];
		}
		this->mString[mLength] = '\0';
	}

	void GetLength(const char* string)
	{
		int index{0};
		while (string[index] != '\0')
		{
			index++;
		}
		mLength = index;
	}


	const String& operator = (const String& string)
	{
		mString = string.mString;
		return *this;
	}
	const char operator[] (const int index)
	{
		char temp;
		temp = this->mString[index];
		return temp;
	}
	
	const String operator + (const String& string)
	{
		mLength = this->mLength + string.mLength;
		char* temp;
		temp = new char[mLength];
		
		for (int i = 0; i < this->mLength; i++)
		{
			if (i < this->mLength - string.mLength)
			{
				temp[i] = this->mString[i];
			}
			else
			{
				temp[i] = string.mString[i - (this->mLength - string.mLength)];
			}
		}

		temp[mLength] = '\0';
		
		return temp;
	}

	const String& operator += (const String& instance)
	{
		int tempLength = mLength;
		char* temp;
		temp = new char[mLength];
		for (int i =0; i < tempLength; i++)
		{
			temp[i] = mString[i];
		}

		mLength = this->mLength + instance.mLength;
		mString = new char[mLength];
		int index{0};
		for (int i = 0; i < tempLength; i++)
		{
			mString[i] = temp[i];
		}
		for (int i = tempLength,j = 0; i < mLength; i++, j++)
		{
			mString[i] = instance.mString[j];
		}
		mString[mLength] = '\0';
		return *this;
	}

	~String()
	{
		delete[] mString;
		mString = nullptr;
		mLength = NULL;
	}

	friend std::ostream& operator << (std::ostream& os , const String& string)
	{
		os << string.mString;

		return os;
	}


};
