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
        std::cout << "이름 : ";
        std::cin >> a;
        std::cout << "번호 : ";
        std::cin >> n;
        std::cout << "점수 :  ";
        std::cin >> s;
        std::cout << "===============" << std::endl;
        GetStu(a, n, s);
        //PrintStu();
    }
    void PrintStu()
    {
        std::cout << "이름 : " << mName << std::endl;
        std::cout << "번호 : " << mNum << std::endl;
        std::cout << "점수 :  " << mScore << std::endl;
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
        std::cout <<"학년 : ";
        std::cin >> year;
        std::cout <<"반 : ";
        std::cin >> cls;
        Get(year, cls);
    }
    
    void Print()
    {
        std::cout <<"=========" << mYear << " 학년 " << " " 
            << mClass << " 반 " << "=========" << std::endl;
        Student stu;
        char a[10];
        int n{}, s{};
        for (int i = 0; i < 3; i++)
        {
            stu.InputStu(a,n,s);
        }
        std::cout << mYear << " 학년 " <<"총합" << mTotalScores << "점" << std::endl;
    }
    //void Print(Class& cls);
};


/*
2. 10명의 학생을 가지고 있는 학급을 클래스로 만들어 봅시다. 
학생도 클래스로 만들어야 합니다.
    학생
이름
번호
성적


    학급
학년
반
학생 10명
전체 학급의 학생 목록을 출력하는 함수
전체 학급의 총점을 구하는 함수

*/