#pragma once
#include <iostream>

const int LENGTH{10};

struct _Var
{
    char name[10];
    int num{}, score{}, total{}, year{}, room{};
};

class Student
{

    int mNum;
    int mScore;
    char mName[10];

public:

    void SetStudent(char name[10], int num, int score)
    {
        strcpy_s(mName, name);
        mNum = num;
        mScore = score;
    }
    void StuPrint() const;
   
    
};

class ClassRoom
{
    int mYear; 
    int mRoom; 
    int mTotal;
    Student student[LENGTH];


public:
    void GetRoom(int year, int room);
    void RoomInput(int year, int room);
    void RoomPrint() const;
    void ListStudent();
    int TotalScore(int score);
};

