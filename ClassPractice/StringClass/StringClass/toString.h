#pragma once
#include <iostream>
#include <string.h>

class String
{
	char* mString;
	int mLength;
public:

	String();
	String(const int index);
	String(const char* string);
	String(const String& instance);
	~String()
	{
		delete[] mString;
		mString = nullptr;
		mLength = 0;
	}

	char* GetString() const;
	int GetLength() const;

	// ¿¬»êÀÚ
	String operator + (const String& instance);
	String& operator = (const String& instance);
	String& operator += (const String& instance);
	char& operator [](int index) const;
	friend std::ostream& operator << (std::ostream& os, const String& string);
};