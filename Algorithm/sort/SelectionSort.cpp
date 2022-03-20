#include <iostream>

int main()
{
	const int SIZE{ 10 };
	int arr[SIZE]{ 1,5,7,3,2,7,5,4,3,0 };
	
	for (int i =0; i < SIZE-1; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			int min = i;
			if (arr[i] > arr[j])
			{
				min = j;
			}

			if (min != i)
			{
				int temp{};
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}