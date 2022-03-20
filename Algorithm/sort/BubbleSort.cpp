#include <iostream>

int main()
{
	const int SIZE{10};
	int arr[SIZE] = { 1,4,5,3,2,1,2,7,8,9 };

	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 0; j < SIZE-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp{};
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}