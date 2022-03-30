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
1. 2D 좌표를 표현하는 클래스를 만들어 봅시다.
x 위치

y 위치
원점에서의 거리를 반환하는 함수
( x, y ) 형태로 출력하는 함수
*/