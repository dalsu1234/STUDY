#pragma once
class Student
{
    char* mName;
    int mNum;
    int mScore;
    int mTotal[3];
public:
    void GetStu(char* a, int n , int s)
    {
        mName = a;
        mNum = n;
        mScore = s;
    }
    void InputStu(char* a, int n, int s)
    {
        std::cout << "�̸� : ";
        std::cin >> a;
        std::cout << "��ȣ : ";
        std::cin >> n;
        std::cout << "���� :  ";
        std::cin >> s;
        std::cout << "===============" << std::endl;
        GetStu(a, n, s);
        //PrintStu();
    }
    void PrintStu()
    {
        std::cout << "�̸� : " << mName << std::endl;
        std::cout << "��ȣ : " << mNum << std::endl;
        std::cout << "���� :  " << mScore << std::endl;
    }

};

class Class
{
    int mYear;
    int mClass;
    int mTotalScores[3];

public:
    void Get(int year, int cls)
    {
        mYear = year;
        mClass = cls;
    }
    void Input(int year, int cls)
    {
        std::cout <<"�г� : ";
        std::cin >> year;
        std::cout <<"�� : ";
        std::cin >> cls;
        Get(year, cls);
    }
    
    void Print()
    {
        std::cout <<"=========" << mYear << " �г� " << " " 
            << mClass << " �� " << "=========" << std::endl;
        Student stu;
        char a[10];
        int n{}, s{};
        for (int i = 0; i < 3; i++)
        {
            stu.InputStu(a,n,s);
        }
        std::cout << mYear << " �г� " <<"����" << mTotalScores << "��" << std::endl;
    }
    //void Print(Class& cls);
};


/*
2. 10���� �л��� ������ �ִ� �б��� Ŭ������ ����� ���ô�. 
�л��� Ŭ������ ������ �մϴ�.
    �л�
�̸�
��ȣ
����


    �б�
�г�
��
�л� 10��
��ü �б��� �л� ����� ����ϴ� �Լ�
��ü �б��� ������ ���ϴ� �Լ�

*/