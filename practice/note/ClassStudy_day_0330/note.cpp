/*
constant variable
- const int NAME_LENGTH{ 10 };

constant parameter  �ܽ�Ʈ �Ű�����
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
2) p1 = &x;  -����

3)* p2 = 1;  -����
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

�����ڿ� �Ҹ��� constructor / destructor

int myValue;  ����
myValue = 1;  ����

int myValue{ 1 }; ����� ����

������ Ŭ������ �ʱ�ȭ�� ? ?


class MyClass
{
	int x;
	int y;
	int z;
};

Ŭ������ �ʱ�ȭ�� ���� �����ڿ� �Ҹ��ڰ� ����


������
�ν��Ͻ��� ������ ��(�ڵ�������) ȣ��Ǵ� Ư���� ����Լ�

Rule
Ŭ������ �̸��� ������ �̸��� �Լ�
��ȯ Ÿ���� ����(void�� �Ⱥ���)
�Ű������� �ʿ信 ���� �߰� ����

�뵵
��� ���� �ʱ�ȭ
�ʱ�ȭ�� �ʿ��� �ٸ� �۾��鵵 ����

�Ҹ���
�ν��Ͻ��� ����� ��(�ڵ�������) ȣ��Ǵ� Ư���� ����Լ�

Rule
Ŭ������ �̸��� ������ �̸��� ���ξ� ~(����ǥ)�� �Լ�
��ȯ Ÿ���� ����(void�� �Ⱥ���)
�Ű������� ����

C++ �����Ϸ��� �⺻������ ������ / �Ҹ��ڸ� �ڵ����� ������ش�
������ ���� - �ƹ��ϵ�����
{}

�ν��Ͻ��� �����ɶ� �ڵ����� �����ڿ� �Ҹ��ڰ� ȣ���

����1
class MyClass
{
public: //��κ� ������ �Ҹ��ڴ� �ۺ� ������ �ν��Ͻ� ���� 
		// �ʼ��� �ƴ�!!
	MyClass() // ������ ����
	{

	}

	~MyClass() // �Ҹ��� ����
	{

	}
};

int main()
{
	MyClass c;
}


����2
class Quest
{
private:
	int mID;
	int mExp;

public:
	// �������� ù��° ����   �⺻ ������ -�����ڸ� �������������� 
	Quest()// �Ű������� ���� �⺻������ �ν��Ͻ��� ����������ڵ����� 
	{
		mID = 0;  // ���Ƿ� �̷������� �־ �ʱ�ȭ�� ����!!
		mExp = 0;
	}

	Quest(int id, int exp)// �̷������ε� ���� /// ������ �����ε�
	{
		mID = id;       //�̷������� �ʱ�ȭ�� ���� .. �Ű�����������
		mExp = exp;
	}

	void Print()
	{
		std::cout << "QuestID : " << mID << std::endl; << ���⼭ mID�� �ν��Ͻ�����!!
			std::cout << "EXP : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;
	Quest q1();// �̰� ���� �ȵ� �ֳĸ� Quest������ �Լ��� �����Ѵٰ� �����ϱ⶧����



	Quest q2(10, 100); // ������ �����ε��� �̷���

	q1.Print();
	q2.Print();
}

*/