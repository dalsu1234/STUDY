#include <iostream>

void Swp(int& x, int& y)
{
	int tmp{};
	tmp = x;
	x = y;
	y = tmp;
}


void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void QuickSort(int arr[], int left, int right)
{
	int l = left;
	int r = right;
	int p = arr[(left+right)/2];

	do {
		
		while (arr[l] < p)
		{
			l++;
		}
		while (arr[r] > p)
		{
			r--;
		}
		if (l <= r)
		{
			Swp(arr[l],arr[r]);
			l++;
			r--;
		}

	} while (l <= r);
	if (left < r)
	{
		QuickSort(arr, left, r);
	}
	if (l < right)
	{
		QuickSort(arr, l, right);
	}
}
int main()
{
	const int SIZE{5};
	int arr[SIZE]{123,523,12,42,23};
	QuickSort(arr, 0, SIZE-1);
	Print(arr, SIZE);
}