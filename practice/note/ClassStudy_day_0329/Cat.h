

#pragma once

class Cat
{
private:
	int mAge;

	// ��� ��� ���� constant member variable
	const int FOOT_COUNT = 4;

public:

	// constant meber function ��� ��� �Լ�
	int GetAge() const; // �ν��Ͻ��� ������ ��������ʴ´ٴ� ��
	// ��� ��� �Լ��� ���� Getter �ϰ��
	void Meow();
	void SetAge(int age); // Setter �ϰ�� 

};

