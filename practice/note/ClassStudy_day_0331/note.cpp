/*

������

�⺻������
	�����ڸ� �������� ������ �ڵ����� ����� �ִ� ����
	�Ű������� ���� �ƹ��͵� ���ϴ� ����
	MyClass()
	{
	}
	(����)

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
		MyClass c1; // ������ �Ұ���
	}

	�ذ��

	MyClass() // �Ű��������� �⺻ �����ڸ� ����������
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
		MyClass c1; // ������ �Ұ���
	}



Initialization
�ʱ�ȭ
>
int a = 2;
int b(2);
int c{2};
int d = {2};

���� �ٸ� �����̴�

1)
int a = 2; // ���� �ʱ�ȭ
copy initialization
2�� ���� �����ؼ� a�� �־��ִ� ���

2)
int b(2);// ���� �ʱ�ȭ
direct initialization 
b��� ��ü�� ����� 2�� �Ű������� ���� 
�⺻�����ڷ� ���� 
Ŭ������ ����  Ŭ������ ����

3)
int c{2}; // ������ �ʱ�ȭ
-> ���� �ʱ�ȭ�� ����

4)
int d = {2};
������ ���� �ʱ�ȭ
�ʱ�ȭ�ؼ� ����

= �� ī�ǰ� �Ͼ ���簡 �Ͼ



��
���ú����� ���� �������

�Ű������� ���� CPU(��������) 
�ӵ��� �������� �������ʹ� ũ�Ⱑ �۴�


1) 4)�� ī�ǰ� �Ͼ�⶧���� ���ο� 
�޸𸮸� �غ��ϰ� �ű�� ������ �ʿ��ؼ� ���ɿ� �������ش�


Ŭ���������� �� 4������ �״�� ����ȴ�

����)
Quest q1 = Quest();  // 1���� ����

Quest q2(1); // ���� �ʱ�ȭ 2���� ����

Quest q3; // ���� �ʱ�ȭ

Quest q4{1}; // �������ʱ�ȭ << ����Ʈ

Quest q5 = { 1 }; // ������ ���� �ʱ�ȭ


��
������ Ÿ��

int *p{}; 

MyClass* pClass{}; // �����͸� �η� �ʱ�ȭ�ϴ°� 

MyClass* pClass2 { new MyClass{ } }; 
MyClass�� �������� �⺻�����ڷ� �����ϰ� ������ ���� pClass2�� �ʱ�ȭ
�⺻�����ڰ� �߿� new MyClass{ } << �̰� �⺻�����ڴ� �ʱ�ȭ �ƴ�








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
	 MyClass c2 {1}; // �̰͸� ���డ�� ������ �������� �Ű������� �����ϰ� �´�
	 MyClass c3 {3,4};

	 std::cout << c1.mValue1 << " " << c1.mValue2 << std::endl;
	 std::cout << c2.mValue1 << " " << c2.mValue2 << std::endl;
	 std::cout << c3.mValue1 << " " << c3.mValue2 << std::endl;
	 //1��°�� 3��°�� �⺻ �����ڰ� �ִٸ� ���డ��  �⺻�����ڿ� �����ڴ� �ٸ���

}


POD����(plain old data)

struct   VS   class

����ü�� Ŭ�������� ����


��
standard Layout Type
c���� ���� ������ Ÿ��
>> int , float , double...


Trivial Type
����ڰ� ������ ������ Ÿ��
>> struct



class ClassA
{
};

class ClassB
{
public:
ClassB();
};
�� �⺻�����ڰ� �ֳ� ������ ����
ù��°�� pod �ι�°�� �ƴ�

������? �����ڰ� ������ ����ų� ��ü�� ���鶧 ���ο��� �����Ѵ�
�������� ������ ����

POD�� ����
�޸𸮿��� �޸𸮷� �����ϱⰡ �ſ� ����

POD�� �ƴѰ��� ���ο��� ��� ���� �������⶧���� �����ϴ�

class�� POD�� �Ƿ��� �⺻�����ڰ� �Ͻ������� ��������






class MyClass
{
public:
int mValue1{1};
int mValue2{2};

MyClass(int value1) // ������
{
mValue1 = value1;
mValue2 = 0;

}
};


int main()
{
	 MyClass c1;
	 MyClass c2 {1}; // �̰͸� ���డ�� ������ �������� �Ű������� �����ϰ� �´�
	 MyClass c3 {3,4};

	 std::cout << c1.mValue1 << " " << c1.mValue2 << std::endl;
	 std::cout << c2.mValue1 << " " << c2.mValue2 << std::endl;
	 std::cout << c3.mValue1 << " " << c3.mValue2 << std::endl;
	 //1��°�� 3��°�� �⺻ �����ڰ� �ִٸ� ���డ��  �⺻�����ڿ� �����ڴ� �ٸ���
	 //1���� 3���� POD�� �����̶� �����ڰ� �ֱ⶧���� ������ �Ұ����ϴ�
	 �⺻ �����ڰ� �Ͻ������� �����Ǿ�߸� POD
	 ��

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

	// �̰� 1��2��3�� ��� ���డ���ϴ�
}






////////////////////////////////////
Ŭ������ ������ ���������� ���Ǵ� ��

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
	ClassA mA; << ���� ���������


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

// A�� ���� ��������� B�� ���������








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
	ClassA mA; << ���� ���������


	public:
	ClassB()
	{
		std::cout << "B"<<std::endl;
	}
}

int main()
{
	ClassB::ClassA c1; << Ŭ���� �ȿ� Ŭ���� ������ ::
	ClassB myClass;
}





////////////////////////////////////

�ν��Ͻ��� ȿ�������� �ʱ�ȭ�ϴ¹��


��ü�� ����
int x;
����
x = 1;
���ǿ� ������ ����
int x { 1 };

������ ����� ���ǰ� ���� �Ұ���
�װ� ���
const int {1};



class Quest
{
	
	private:
	int mID;    // ����
	int mExp;	// ����
	
	
	
	public:
	Quest(int id, int exp)
	{
	mID = id;   //���� 
	mExp = exp; // ����
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
���࿡ ������??
class Quest
{

	private:
	const int mID;    // ����� ����� ���ǰ� ���е������� �Ұ�����
	int mExp;	// ����



	public:
	Quest(int id, int exp)
	{
	mID = id;   //����
	mExp = exp; // ����
	}

	void Print()
	{
	std::cout << "iD : " << mID << " EXT : << mExp << std::endl;
	}


}

�����?


�����ڿ� �ʱ�ȭ�� �Ҽ��ִ�

��� �ʱ�ȭ ����Ʈ
<������> : <����ʱ�ȭ1>, <��� �ʱ�ȭ2>, .....
{

}
Quest(int id, int exp) : mID {id}, mExp {exp}
Quest(int id, int exp) : mID (id), mExp (exp)

Quest(int id, int exp) : mID = id, mExp = exp // �̰� �ȵȴ� ���� ���簡�Ǵ� ���¶�



class Quest
{

	private:
	const int mID;    // ����
	int mExp;	// ����



	public:
	

	Quest(int id, int exp) : mID {id}, mExp {exp}   // << ����ʱ�ȭ����Ʈ
	{
		// �̹� ������ �ʱ�ȭ �߱⶧���� �ȿ� �� ���� ���Ծ��ص� ��
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



/// ��������� ���� �ʱ�ȭ�� �������� �����ڿ��� ����ʱ�ȭ���� ����ϴ°� ����
������ �ߺ��Ǵ� �۾��� ����⶧����
��������� �ʱ�ȭ �غ��� �����ڿ��� �ѹ� �� �۾��� �̷�� ����

// Ŭ������ ��������� �������� �Ű������� ������쿣
this->�� ���


��

int id;
int exp

Quest (int id , int exp)
{
	this->id = id;
	this->exp = exp;
}



Ȥ�� ����ʱ�ȭ������.. 
Quest (int id, int exp) : id {id}, exp {exp}
{
}







*/