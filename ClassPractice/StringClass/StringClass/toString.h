#pragma once

class String
{
private:
	char* mLetter;
	int mLength;
public:
	String(const char* input);
	void Print();
};
