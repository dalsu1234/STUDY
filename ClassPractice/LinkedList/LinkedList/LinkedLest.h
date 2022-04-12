#pragma once
class LinkedList
{
protected:
	int mSize;
	int* mArr;
	int mNum;
	int mIndex;
	int mHead;

	

protected:
	LinkedList();
	LinkedList(int size);
	~LinkedList();

public:
	virtual void InputNum(int num);
	virtual void ExitNum();

	virtual void PrintInfo();
	virtual void Print();


};

