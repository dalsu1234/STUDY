#include <iostream>
#include "Cat.h"
 /*
 class <name>
 {
 [����������]
	 <member1>
	 <member2>
	 ...
 }[�ν��Ͻ�];


 [] : ��������


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
		 color = 1; //�̷������� ��밡�� Ŭ���� ���δϱ�..
	 }
 };

 Cat nacho;
 nacho.age = 3;
 nacho.color = 1; // �Ұ��� Ŭ���� ���ο����� ���氡�� �����̺���



 ���������ڸ� �����Ѵٸ� ����Ʈ�� private: �� �ȴ�

	 Access Modifier(����������)
	 - public
	 Ŭ���� ���� / �ܺο��� ��밡��
	 ����Լ����� ���� // �ν��Ͻ����� ����
	 - protected // �ݹ� �ۺ��� �����̺� �� ///��Ӱ� ��������
	 - private
	 Ŭ���� ���ο����� ��밡��
	 ����Լ������� ���� �ν��Ͻ������� �Ұ���

 */

////////////////////////
/*
 Ŭ�����̸� : �Ľ�Į ǥ���

 class Cat
 class MyDog

 ������� : ���ξ m�� ����ϰ� �Ľ�Į ǥ���
 {
	int mMyage;
	int mYourHeight;

	Ȥ�� int m_Myage;
 }

 ��� �Լ� : �Ľ�Į ǥ���
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
	/// �⺻�� �����̺� private. ĸ��ȭ!! �̱⋚��

public:
	void Print()
	{
		std::cout << mScore << std::endl;
	}
};

class pint3D
{//�⺻�� �����̺�
	int mX;
	int mY;
	int mZ;
};


class Monster
{
	// �ϴ��� �����̺����� ����� �ۺ��� �ѹ� ����غ���
	int mHp;
	char mName[10];
};


int main()
{
	Student doggy, kitty;

	doggy.Print();  //�ۺ��� ���⼭ �����ִ�

}
*/
/////////////////////////////////////////////////////

/*
class Point2D
{
	int mX;
	int mY;

public:

	//Getter�� Setter ���������� ��а��� �̷�������
	void SetX(int x);
	void SetY(int y);
	void Set(int x, int y); // �̷������� �����Ѵ�
	int GetX();
	int GetY();
	void Print();
};


int main()
{
	Point2D pt1;
	// pt.x = 1; // �ȵ� �����̺��̶� �׷� �����̺��� ���� �ٲ�??

	pt1.Set(1, 1); // �����̺��� �̷������� ��Ʈ�� �Ѵ�.

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


// ����ü�� ��� ����� public�� Ŭ������ ����
// �׷� ����ü�� Ŭ������ ���̴� �հ�
struct : ��� �����鸸 �����ϴ� �ڷᱸ��
class : ��� �Լ��� �ʿ��� ���� (���� struct�� ����Լ��� ����Ҽ��� ������)


class Point2D
{
	int x;
	int y;

	// ����Լ��� ����

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




//  ����Լ� ����
// public�̴� private�� ���Ǵ� ���� ������� �̹� ���� ���еǾ��ֱ⶧����


void Point2D::Print()
{
	std::cout << std::endl;
}

void Point3D::Print()
{

}


// �����Լ�
void Print()
{

}





int main()
{
	// ���� �ذ� ������ :: ex >> std::cout

	Print();
	point2D::Print(); // �ȵ�
	point3D::Print(); // �ȵ�
}


*/

//////////////////////////////////////////////////////////
/*

int main()
{
	Cat nacho;

	nacho.Meow();

	nacho.GetAge(); // ��� ��� �Լ�
	// �����Ҵ� ����
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
}; //// ; ����Ŭ��<<- ���⼭ ������ �Ǳ� ������ ��ó�� �ᵵ �������
// ���漱��ó�� ���ص� �ȴ�


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

