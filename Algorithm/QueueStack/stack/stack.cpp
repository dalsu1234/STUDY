#include <iostream>
const int STACK_SIZE{ 10 };
enum
{
	PUSH = 1,
	POP,
	EXIT
};

struct STACK {
	int array[STACK_SIZE]{};
	int topIndex{ -1 };
};

void PrintInfo()
{
	std::cout << " <STACK> " << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "=============" << std::endl;
}
void PrintStack(STACK& stack)
{
	std::cout << "<stack>" << std::endl;
	if (stack.topIndex < 0)
	{
		std::cout << "empty" << std::endl;
	}
	else {
		for (int i = stack.topIndex; i >= 0; --i)
		{
			std::cout << stack.array[i] << std::endl;
		}
	}
	std::cout << "  ================ " << std::endl;
}
void PushStack(STACK& stack, int value)
{
	if (stack.topIndex >= STACK_SIZE - 1)
	{
		std::cout << " full!!" << std::endl;
		return;
	}
	stack.array[++stack.topIndex] = value;
}
void PopStack(STACK& stack)
{
	if (stack.topIndex < 0)
	{
		std::cout << "empty!!" << std::endl;
		return;
	}
	std::cout << stack.array[stack.topIndex--] << "를 꺼냈씁니다." << std::endl;

}
void UserInput(STACK& stack)
{
	int command{};
	bool isExit{ false };
	while (true)
	{
		PrintStack(stack);
		std::cout << std::endl << " > ";
		std::cin >> command;
		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "      value >>";
			std::cin >> value;
			PushStack(stack, value);
			break;
		}
		case POP:
			PopStack(stack);
			break;
		case EXIT:
			isExit = true;
			break;

		default:
			std::cout << "wrong" << std::endl;
			break;
		}

		if (isExit)
		{
			break;
		}
	}
}
int main()
{
	STACK stack;
	PrintInfo();

	UserInput(stack);
}