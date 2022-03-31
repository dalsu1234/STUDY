#include <iostream>
#include "student.h"

void ClassRoom::GetRoom(int year, int room)
{
	mYear = year;
	mRoom = room;
}

void ClassRoom::RoomInput(int year, int room)
{
	std::cout << "학년: ";
	std::cin >> year;
	std::cout << "반: ";
	std::cin >> room;
	std::cout << "--------------" << std::endl;
	GetRoom(year, room);
}

void ClassRoom::RoomPrint() const
{
	std::cout << "====" << mYear << " 학년" << " ";
	std::cout << mRoom << "반 " << "====" << std::endl;
}

void ClassRoom::ListStudent()
{
	_Var var;
	RoomInput(var.year, var.room);
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "이름 : ";
		std::cin >> var.name;
		std::cout << "번호 : ";
		std::cin >> var.num;
		std::cout << "점수 : ";
		std::cin >> var.score;
		std::cout << "--------------" << std::endl;
		student[i].SetStudent(var.name, var.num, var.score);

		var.total += var.score;
	}

	RoomPrint();
	
	for (int i = 0; i < LENGTH; i++)
	{
		student[i].StuPrint();
	}
	
	TotalScore(var.total);
	std::cout << "총합 : " << mTotal << std::endl;
}

int ClassRoom::TotalScore(int score)
{
	return mTotal = score;
}
