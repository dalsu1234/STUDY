

#pragma once

class Cat
{
private:
	int mAge;

	// 상수 멤버 변수 constant member variable
	const int FOOT_COUNT = 4;

public:

	// constant meber function 상수 멤버 함수
	int GetAge() const; // 인스턴스에 내용이 변경되지않는다는 뜻
	// 상수 멤버 함수는 보통 Getter 일경우
	void Meow();
	void SetAge(int age); // Setter 일경우 

};

