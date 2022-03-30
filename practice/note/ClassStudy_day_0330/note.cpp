/*
constant variable
- const int NAME_LENGTH{ 10 };

constant parameter  콘스트 매개변수
- void PrintInfo(const Queue & queue);

constant return value
- const Stack & GetStack();

constant member funtion
- class MyClass
{
	int GetValue() const;
};




--------------------------------------------------


constatnt pointer variable

const int* p1;
int* const p2;

const int* const p3;


1)* p1 = 1;
2) p1 = &x;  -가능

3)* p2 = 1;  -가능
4) p2 = &x;

5)* p3 = 1;
6) p3 = &x;


----------------------------------------------------


class Myclass
{
private:
	int x;
	int y;

public:
	void SetX(int x) { this->x = x; }
}



int main()
{

}

생성자와 소멸자 constructor / destructor

int myValue;  선언
myValue = 1;  정의

int myValue{ 1 }; 선언과 정의

하지만 클래스의 초기화는 ? ?


class MyClass
{
	int x;
	int y;
	int z;
};

클래스의 초기화를 위해 생성자와 소멸자가 존재


생성자
인스턴스가 생성될 때(자동적으로) 호출되는 특별한 멤버함수

Rule
클래스의 이름과 동일한 이름의 함수
반환 타입이 없다(void도 안붙임)
매개변수는 필요에 따라 추가 가능

용도
멤버 변수 초기화
초기화에 필요한 다른 작업들도 가능

소멸자
인스턴스가 사라질 때(자동적으로) 호출되는 특별한 멤버함수

Rule
클래스의 이름과 동일한 이름에 접두어 ~(물결표)의 함수
반환 타입이 없다(void도 안붙임)
매개변수도 없다

C++ 컴파일러가 기본적으로 생성자 / 소멸자를 자동으로 만들어준다
내용은 없음 - 아무일도안함
{}

인스턴스가 생성될때 자동으로 생성자와 소멸자가 호출됨

예제1
class MyClass
{
public: //대부분 생성자 소멸자는 퍼블릭 이유는 인스턴스 때문 
		// 필수는 아님!!
	MyClass() // 생성자 예제
	{

	}

	~MyClass() // 소멸자 예제
	{

	}
};

int main()
{
	MyClass c;
}


예제2
class Quest
{
private:
	int mID;
	int mExp;

public:
	// 생성자의 첫번째 형태   기본 생성자 -생성자를 제공하지않을때 
	Quest()// 매개변수가 없느 기본생성자 인스턴스가 만들어질때자동으로 
	{
		mID = 0;  // 임의로 이런식으로 넣어서 초기화가 가능!!
		mExp = 0;
	}

	Quest(int id, int exp)// 이런식으로도 가능 /// 생성자 오버로딩
	{
		mID = id;       //이런식으로 초기화도 가능 .. 매개변수에따라
		mExp = exp;
	}

	void Print()
	{
		std::cout << "QuestID : " << mID << std::endl; << 여기서 mID는 인스턴스꺼임!!
			std::cout << "EXP : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;
	Quest q1();// 이건 절대 안됨 왜냐면 Quest형식의 함수를 선언한다고 착각하기때문에



	Quest q2(10, 100); // 생성자 오버로딩은 이런식

	q1.Print();
	q2.Print();
}

*/