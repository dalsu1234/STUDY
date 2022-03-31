#include <iostream>
#include "student.h"

void ClassRoom::GetRoom(int year, int room)
{
	mYear = year;
	mRoom = room;
}

void ClassRoom::RoomInput(int year, int room)
{
	std::cout << "�г�: ";
	std::cin >> year;
	std::cout << "��: ";
	std::cin >> room;
	std::cout << "--------------" << std::endl;
	GetRoom(year, room);
}

void ClassRoom::RoomPrint() const
{
	std::cout << "====" << mYear << " �г�" << " ";
	std::cout << mRoom << "�� " << "====" << std::endl;
}

void ClassRoom::ListStudent()
{
	_Var var;
	RoomInput(var.year, var.room);
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "�̸� : ";
		std::cin >> var.name;
		std::cout << "��ȣ : ";
		std::cin >> var.num;
		std::cout << "���� : ";
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
	std::cout << "���� : " << mTotal << std::endl;
}

int ClassRoom::TotalScore(int score)
{
	return mTotal = score;
}
