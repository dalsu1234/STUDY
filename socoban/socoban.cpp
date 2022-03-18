#include <iostream>


const int width{ 8 };
const int height{ 5 };

struct _STAGE {
	char border{ '#' };
	char player{ 'p' };
	char box{ 'o' };
	char pBox{ 'O' };
	char spot{ '.' };
	char blank{ ' ' };
	char tmp{};

	char baseArr[width * height]{};
	
	int playerPos{ ((width + 2) + width) + 2 };
	int boxPos1{ (width + 1) + width };
	int boxPos2{ (width + 2) + width };

	int winCount{};
};


_STAGE* stage = new _STAGE;

void BaseArr(_STAGE* stage);
void BasePrint(_STAGE* stage);

void moveLeft(_STAGE* stage);
void moveRight(_STAGE* stage);
void moveTop(_STAGE* stage);
void moveDown(_STAGE* stage);


int main()
{
	int input{};
	
	if (stage)
	{
		BaseArr(stage);
		while (true)
		{
			
			BasePrint(stage);
			std::cout << "1. 왼쪽, 2. 오른쪽, 3. 위, 4. 아래";
			std::cin >> input;
			
			switch (input)
			{
				case 1:
					moveLeft(stage);
					break;
				case 2:
					moveRight(stage);
					break;
				case 3:
					moveTop(stage);
					break;
				case 4:
					moveDown(stage);
					break;
				default:
					std::cout << "불가능!" << std::endl;
					break;
			}
			if (stage->winCount == 2)
			{
				BasePrint(stage);
				std::cout << std::endl;
				std::cout << " @@@@@@ CLEAR @@@@@@ " << std::endl;
				std::cout << " @@@@@@ CLEAR @@@@@@ " << std::endl;
				std::cout << " @@@@@@ CLEAR @@@@@@ " << std::endl;
				break;
			}
		}
	}
	else
	{
		std::cout << "error" << std::endl;
	}

	delete stage;
	stage = nullptr;
}


void BaseArr(_STAGE* stage)
{
	int n{};
	for (int i = 0; i < width * height; i++)
	{
		if (i  < width || (i % width) == 0 || (i % width) == (width - 1) || i > width * (height - 1))
		{
			stage->baseArr[i] = stage->border;
		}
		else if (i == width + 1 || i == width + 2)
		{
			stage->baseArr[i] = stage->spot;
		}
		else if (i == stage->boxPos1 || i == stage->boxPos2)
		{
			stage->baseArr[i] = stage->box;
		}
		
		else if (i == stage->playerPos)
		{
			stage->baseArr[i] = stage->player;
		}
		else
		{
			stage->baseArr[i] = stage->blank;
		}
	}
}

void BasePrint(_STAGE* stage)
{
	for (int i = 0; i < width * height; i++)
	{
		std::cout << stage->baseArr[i];
		if ((i % width) == (width - 1))
		{
			std::cout << std::endl;
		}
	}
}

void moveLeft(_STAGE* stage)
{
	char tmp = stage->baseArr[stage->playerPos - 1];
	char tmp2 = stage->baseArr[stage->playerPos - 2];
	if (tmp == ' ')
	{
		if (tmp == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			stage->tmp = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->baseArr[stage->playerPos - 1];
			stage->baseArr[stage->playerPos - 1] = stage->tmp;
			stage->playerPos--;
		}
	}
	else if (tmp == stage->box)
	{
		if (tmp2 == stage->box)
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else if (tmp2 == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			if (stage->baseArr[stage->playerPos - 2] == stage->spot)
			{
				stage->winCount++;
			}
			stage->baseArr[stage->playerPos - 1] = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->blank;
			stage->baseArr[stage->playerPos - 2] = stage->box;
			stage->playerPos--;
		}
	}
	else
	{
		std::cout << " 불가능!! " << std::endl;
	}
}

void moveRight(_STAGE* stage)
{
	char tmp = stage->baseArr[stage->playerPos + 1];
	char tmp2 = stage->baseArr[stage->playerPos + 2];
	
	if (tmp == ' ')
	{
		if (tmp == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			stage->tmp = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->baseArr[stage->playerPos + 1];
			stage->baseArr[stage->playerPos + 1] = stage->tmp;
			stage->playerPos++;
		}
	}
	else if (tmp == stage->box)
	{
		if (tmp2 == stage->box)
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else if (tmp2 == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			if (stage->baseArr[stage->playerPos + 2] == stage->spot)
			{
				stage->winCount++;
			}
			stage->baseArr[stage->playerPos + 1] = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->blank;
			stage->baseArr[stage->playerPos + 2] = stage->box;
			stage->playerPos++;
		}
	}
	else
	{
		std::cout << " 불가능!! " << std::endl;
	}
}

void moveTop(_STAGE* stage)
{
	char tmp = stage->baseArr[stage->playerPos - width];
	char tmp2 = stage->baseArr[stage->playerPos - (width*2)];
	if (tmp == ' ')
	{
		if (tmp == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			stage->tmp = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->baseArr[stage->playerPos - width];
			stage->baseArr[stage->playerPos - width] = stage->tmp;
			stage->playerPos -= width;
		}
	}
	else if (tmp == stage->box)
	{
		if (tmp2 == stage->box)
		{
			std::cout << " !!불가능!!1 " << std::endl;
		}
		else if (tmp2 == '#')
		{
			std::cout << " !!불가능!!2 " << std::endl;
		}
		else
		{
			if (stage->baseArr[stage->playerPos - (width * 2)] == stage->spot)
			{
				stage->winCount++;
			}
			stage->baseArr[stage->playerPos - width] = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->blank;
			stage->baseArr[stage->playerPos - (width * 2)] = stage->box;
			stage->playerPos -= width;
		}
	}
	else
	{
		std::cout << " 불가능!!3 " << std::endl;
	}
}

void moveDown(_STAGE* stage)
{
	char tmp = stage->baseArr[stage->playerPos + width];
	char tmp2 = stage->baseArr[stage->playerPos + (width * 2)];
	if (tmp == ' ')
	{
		if (tmp == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			stage->baseArr[stage->playerPos + width] = stage->player;
			stage->baseArr[stage->playerPos] = stage->blank;
			stage->playerPos += width;
		}
	}
	else if (tmp == stage->box)
	{
		if (tmp2 == stage->box)
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else if (tmp2 == '#')
		{
			std::cout << " !!불가능!! " << std::endl;
		}
		else
		{
			if (stage->baseArr[stage->playerPos + (width * 2)] == stage->spot)
			{
				stage->winCount++;
			}
			stage->baseArr[stage->playerPos + width] = stage->baseArr[stage->playerPos];
			stage->baseArr[stage->playerPos] = stage->blank;
			stage->baseArr[stage->playerPos + (width * 2)] = stage->box;
			stage->playerPos += width;
		}
	}
	else
	{
		std::cout << " 불가능!! " << std::endl;
	}
	
}
