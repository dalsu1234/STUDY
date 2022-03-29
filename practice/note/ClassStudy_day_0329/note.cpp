#include <iostream>
#include "Cat.h"
 /*
 class <name>
 {
 [접근제한자]
	 <member1>
	 <member2>
	 ...
 }[인스턴스];


 [] : 생략가능


 class Cat
 {
 public:
	 int age;
	 char name[10];
	 char bread[20];

 private:
	 int color;
	 void Meow();
	 {
		 color = 1; //이런식으로 사용가능 클래스 내부니깐..
	 }
 };

 Cat nacho;
 nacho.age = 3;
 nacho.color = 1; // 불가능 클래스 내부에서만 변경가능 프라이빗은



 접근제한자를 사용안한다면 디폴트는 private: 가 된다

	 Access Modifier(접근제한자)
	 - public
	 클래스 내부 / 외부에서 사용가능
	 멤버함수에서 가능 // 인스턴스에서 가능
	 - protected // 반반 퍼블릭반 프라이빗 반 ///상속과 관련있음
	 - private
	 클래스 내부에서만 사용가능
	 멤버함수에서는 가능 인스턴스에서는 불가능

 */

////////////////////////
/*
 클래스이름 : 파스칼 표기법

 class Cat
 class MyDog

 멤버변수 : 접두어에 m을 명시하고 파스칼 표기법
 {
	int mMyage;
	int mYourHeight;

	혹은 int m_Myage;
 }

 멤버 함수 : 파스칼 표기법
 {
	void Attack();
	void Run();
 }



 */
/////////////////////////////////////////////////////////////


/*
class Student
{
	int mScore;
	int mNumber;

	void Ranking()
	{}
	/// 기본은 프라이빗 private. 캡슐화!! 이기떄문

public:
	void Print()
	{
		std::cout << mScore << std::endl;
	}
};

class pint3D
{//기본은 프라이빗
	int mX;
	int mY;
	int mZ;
};


class Monster
{
	// 일단은 프라이빗으로 만들고 퍼블릭은 한번 고민해볼것
	int mHp;
	char mName[10];
};


int main()
{
	Student doggy, kitty;

	doggy.Print();  //퍼블릭만 여기서 쓸수있다

}
*/
/////////////////////////////////////////////////////

/*
class Point2D
{
	int mX;
	int mY;

public:

	//Getter와 Setter 불편하지만 당분간은 이런식으로
	void SetX(int x);
	void SetY(int y);
	void Set(int x, int y); // 이런식으로 접근한다
	int GetX();
	int GetY();
	void Print();
};


int main()
{
	Point2D pt1;
	// pt.x = 1; // 안됨 프라이빗이라 그럼 프라이빗은 어케 바꿈??

	pt1.Set(1, 1); // 프라이빗을 이런식으로 컨트롤 한다.

}

void Point2D::SetX(int x)
{
	mX = x;
}

void Point2D::SetY(int y)
{
	mY = y;
}

void Point2D::Set(int x, int y)
{
	mX = x;
}

int Point2D::GetX()
{
	return mX;
}

int Point2D::GetY()
{
	return 0;
}


// 구조체는 모든 멤버가 public인 클래스와 같다
// 그럼 구조체와 클래스의 차이는 먼가
struct : 멤버 변수들만 존재하는 자료구조
class : 멤버 함수가 필요한 객제 (물론 struct도 멤버함수를 사용할수는 있지만)


class Point2D
{
	int x;
	int y;

	// 멤버함수의 선언

private:
	void Print();
};


class Point3D
{
	int x;
	int y;
	int z;

public:
	void Print();
};




//  멤버함수 정의
// public이던 private던 정의는 따로 상관없다 이미 선언에 구분되어있기때문에


void Point2D::Print()
{
	std::cout << std::endl;
}

void Point3D::Print()
{

}


// 전역함수
void Print()
{

}





int main()
{
	// 범위 해결 연산자 :: ex >> std::cout

	Print();
	point2D::Print(); // 안됨
	point3D::Print(); // 안됨
}


*/

//////////////////////////////////////////////////////////
/*

int main()
{
	Cat nacho;

	nacho.Meow();

	nacho.GetAge(); // 상수 멤버 함수
	// 동적할당 가능
	Cat* pCanCho = new Cat{};

	pCanCho->Meow();
	delete pCanCho;

}
class MyClass
{
	void f1()
	{
		f2();
	}

	void f2()
	{

	}
}; //// ; 세미클론<<- 여기서 선언이 되기 때문에 위처럼 써도 상관없다
// 전방선언처럼 안해도 된다


struct Dog
{
	int age;

};



struct Cat
{
	int age;
public:
	int GetAge()
	{
		return age;
	}
};


int main()
{
	Cat nacho;
	std::cout << nacho.GetAge() << std::endl;
}

*/

