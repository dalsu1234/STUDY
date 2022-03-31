/*

생성자

기본생성자
	생성자를 제공하지 않으면 자동으로 만들어 주는 형태
	매개변수가 없는 아무것도 안하는 형태
	MyClass()
	{
	}
	(예제)

	class MyClass
	{
		int mX;
		public:
		MyClass(int value)
		{
			mX = value
		}
	};
	int main()
	{
		MyClass c1; // 컴파일 불가능
	}

	해결법

	MyClass() // 매개변수없는 기본 생성자를 만들어줘야함
	{
		mX = 0;
	}

	class MyClass
	{
		int mX;
		public:
		MyClass(int value)
		{
			mX = value
		}
	};
	int main()
	{
		MyClass c1; // 컴파일 불가능
	}



Initialization
초기화
>
int a = 2;
int b(2);
int c{2};
int d = {2};

서로 다른 개념이다

1)
int a = 2; // 복사 초기화
copy initialization
2의 값을 복사해서 a에 넣어주는 방식

2)
int b(2);// 직접 초기화
direct initialization 
b라는 객체를 만들고 2의 매개변수가 들어가서 
기본생성자로 생성 
클래스랑 같음  클래스의 형태

3)
int c{2}; // 유니폼 초기화
-> 직접 초기화와 같다

4)
int d = {2};
유니폼 복사 초기화
초기화해서 복사

= 는 카피가 일어남 복사가 일어남



ㄴ
로컬변수는 램에 만들어짐

매개변수는 램과 CPU(레지스터) 
속도는 빠르지만 레지스터는 크기가 작다


1) 4)은 카피가 일어나기때문에 새로운 
메모리를 준비하고 옮기는 과정이 필요해서 성능에 영향을준다


클래스에서도 이 4가지가 그대로 적용된다

예제)
Quest q1 = Quest();  // 1번과 같음

Quest q2(1); // 직접 초기화 2번과 같음

Quest q3; // 직접 초기화

Quest q4{1}; // 유니폼초기화 << 베스트

Quest q5 = { 1 }; // 유니폼 복사 초기화


ㄴ
포인터 타입

int *p{}; 

MyClass* pClass{}; // 포인터를 널로 초기화하는것 

MyClass* pClass2 { new MyClass{ } }; 
MyClass를 동적으로 기본생성자로 생성하고 포인터 변수 pClass2에 초기화
기본생성자가 중요 new MyClass{ } << 이게 기본생성자다 초기화 아님








class MyClass
{
public:
int mValue1{1};
int mValue2{2};

MyClass(int value1)
{
mValue1 = value1;
mValue2 = 0;

}
};


int main()
{
	 MyClass c1;
	 MyClass c2 {1}; // 이것만 실행가능 이유는 생성자의 매개변수가 유일하게 맞다
	 MyClass c3 {3,4};

	 std::cout << c1.mValue1 << " " << c1.mValue2 << std::endl;
	 std::cout << c2.mValue1 << " " << c2.mValue2 << std::endl;
	 std::cout << c3.mValue1 << " " << c3.mValue2 << std::endl;
	 //1번째와 3번째는 기본 생성자가 있다면 실행가능  기본생성자와 생성자는 다르다

}


POD개념(plain old data)

struct   VS   class

구조체와 클래스와의 차이


ㄴ
standard Layout Type
c언어와 같은 구조의 타입
>> int , float , double...


Trivial Type
사용자가 정의한 간단한 타입
>> struct



class ClassA
{
};

class ClassB
{
public:
ClassB();
};
ㄴ 기본생성자가 있냐 없냐의 차임
첫번째는 pod 두번째는 아님

이유는? 생성자가 변수를 만들거나 객체를 만들때 내부에서 일을한다
생성자의 유무로 구별

POD의 장점
메모리에서 메모리로 복사하기가 매우 쉽다

POD가 아닌것은 내부에서 어떠한 일이 벌어지기때문에 복잡하다

class가 POD가 되려면 기본생성자가 암시적으로 쓰여야함






class MyClass
{
public:
int mValue1{1};
int mValue2{2};

MyClass(int value1) // 생성자
{
mValue1 = value1;
mValue2 = 0;

}
};


int main()
{
	 MyClass c1;
	 MyClass c2 {1}; // 이것만 실행가능 이유는 생성자의 매개변수가 유일하게 맞다
	 MyClass c3 {3,4};

	 std::cout << c1.mValue1 << " " << c1.mValue2 << std::endl;
	 std::cout << c2.mValue1 << " " << c2.mValue2 << std::endl;
	 std::cout << c3.mValue1 << " " << c3.mValue2 << std::endl;
	 //1번째와 3번째는 기본 생성자가 있다면 실행가능  기본생성자와 생성자는 다르다
	 //1번과 3번은 POD의 개념이라 생성자가 있기때문에 실행이 불가능하다
	 기본 생성자가 암시적으로 생성되어야만 POD
	 즉

	 class MyClass
{
public:
int mValue1{1};
int mValue2{2};


int main()
{
	 MyClass c1;
	 MyClass c2 {1}; 
	 MyClass c3 {3,4};

	 std::cout << c1.mValue1 << " " << c1.mValue2 << std::endl;
	 std::cout << c2.mValue1 << " " << c2.mValue2 << std::endl;
	 std::cout << c3.mValue1 << " " << c3.mValue2 << std::endl;

	// 이건 1번2번3번 모두 실행가능하다
}






////////////////////////////////////
클래스가 여러개 복합적으로 사용되는 예

class ClassA
{
	public:
	ClassA()
	{
		std::cout << "A"<<std::endl;
	}
}

class ClassB
{
	ClassA mA; << 먼저 만들어진다


	public:
	ClassB()
	{
		std::cout << "B"<<std::endl;
	}
}

int main()
{
	ClassB myClass;
}

// A가 먼저 만들어지고 B가 만들어진다








class ClassB
{
public:
class ClassA
{
	public:
	ClassA()
	{
		std::cout << "A"<<std::endl;
	}
}
	ClassA mA; << 먼저 만들어진다


	public:
	ClassB()
	{
		std::cout << "B"<<std::endl;
	}
}

int main()
{
	ClassB::ClassA c1; << 클래스 안에 클래스 접근은 ::
	ClassB myClass;
}





////////////////////////////////////

인스턴스를 효율적으로 초기화하는방법


객체를 선언
int x;
정의
x = 1;
정의와 선언을 동시
int x { 1 };

하지만 선언와 정의가 따로 불가능
그건 상수
const int {1};



class Quest
{
	
	private:
	int mID;    // 선언
	int mExp;	// 선언
	
	
	
	public:
	Quest(int id, int exp)
	{
	mID = id;   //정의 
	mExp = exp; // 정의
	}
	
	void Print()
	{
	std::cout << "iD : " << mID << " EXT : << mExp << std::endl;
	}
	
	
}



int main()
{

Quest q1(1, 100);
q1.Print();

}
///////////////
만약에 상수라면??
class Quest
{

	private:
	const int mID;    // 상수라 선언과 정의가 구분되지못함 불가능함
	int mExp;	// 선언



	public:
	Quest(int id, int exp)
	{
	mID = id;   //정의
	mExp = exp; // 정의
	}

	void Print()
	{
	std::cout << "iD : " << mID << " EXT : << mExp << std::endl;
	}


}

방법은?


생성자에 초기화를 할수있다

멤버 초기화 리스트
<생성자> : <멤버초기화1>, <멤버 초기화2>, .....
{

}
Quest(int id, int exp) : mID {id}, mExp {exp}
Quest(int id, int exp) : mID (id), mExp (exp)

Quest(int id, int exp) : mID = id, mExp = exp // 이건 안된다 값이 복사가되는 형태라



class Quest
{

	private:
	const int mID;    // 선언
	int mExp;	// 선언



	public:
	

	Quest(int id, int exp) : mID {id}, mExp {exp}   // << 멤버초기화리스트
	{
		// 이미 위에서 초기화 했기때문에 안에 머 따로 대입안해도 됨
	}

	void Print()
	{
	std::cout << "iD : " << mID << " EXT : << mExp << std::endl;
	}


}


int main()
{

Quest q1(1, 100);
q1.Print();

}



/// 멤버변수를 직접 초기화는 하지말고 생성자에서 멤버초기화식을 사용하는게 좋다
이유는 중복되는 작업이 생기기때문에
멤버변수에 초기화 해봤자 생성자에서 한번 더 작업이 이루어 진다

// 클래스에 멤버변수와 생성자의 매개변수가 같을경우엔
this->를 사용


예

int id;
int exp

Quest (int id , int exp)
{
	this->id = id;
	this->exp = exp;
}



혹은 멤버초기화식으로.. 
Quest (int id, int exp) : id {id}, exp {exp}
{
}







*/