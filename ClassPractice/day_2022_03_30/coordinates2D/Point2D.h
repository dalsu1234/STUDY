#pragma once
class Point2D
{
	int mX;
	int mY;

public:
	
	Point2D(int x, int y)
	{
		mX = x;
		mY = y;
	}

	void Distance(Point2D& xy);
	void Print2D(Point2D& xy);
};

/*
1. 2D ��ǥ�� ǥ���ϴ� Ŭ������ ����� ���ô�.
x ��ġ

y ��ġ
���������� �Ÿ��� ��ȯ�ϴ� �Լ�
( x, y ) ���·� ����ϴ� �Լ�
*/