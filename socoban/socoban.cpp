#include <iostream>


const int width{ 8 };
const int height{ 5 };

struct _STAGE {
	char border {'#'};
	char player{'p'};
	char box{'o'};
	char pBox{ 'O' };
	char spot{'.'};
	char blank{' '};
	char baseArr[width*height]{};
};


_STAGE* stage = new _STAGE;

void BaseArr(_STAGE* stage);
void BasePrint(_STAGE* stage);


int main()
{
	if (stage)
	{
		BaseArr(stage);
		BasePrint(stage);
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
	for (int i = 0; i < width*height; i++)
	{
		if (i  < width || (i % width) == 0 || (i % width) == (width-1)|| i > width * (height-1))
		{
			stage->baseArr[i] = stage->border;
		}
		else if (i == width + 1 || i == width + 2)
		{
			stage->baseArr[i] = stage->spot;
		}
		else if (i == (width + 1) + width || i == (width + 2) + width)
		{
			stage->baseArr[i] = stage->box;
		}
		else if (i == ((width + 2) + width)+2)
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