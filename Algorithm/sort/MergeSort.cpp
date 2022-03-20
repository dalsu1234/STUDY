#include <iostream>


void PrintSort(int arr[], int size);
void MergeSort(int arr[], int start, int end, int temp[]);
void Merge(int arr[], int start, int half, int end, int temp[]);

int main()
{
	const int SIZE{ 10 };
	
	int arr[SIZE]{1,4,2,3,5,7,3,1,2,0};
	
	int temp[SIZE]{};
	

	MergeSort(arr, 0, SIZE-1, temp);
	PrintSort(arr, SIZE);
}

void PrintSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void MergeSort(int arr[], int start, int end, int temp[])
{
	if (start >= end)
	{
		return;
	}
	int half = (start + end) / 2;
	MergeSort(arr, start, half, temp);
	MergeSort(arr, half+1, end, temp);
	Merge(arr, start, half, end, temp);
}

void Merge(int arr[], int start, int half, int end, int temp[])
{
	int i = start;
	int j = half + 1;
	int index{};
	while (i <= half && j <= end)
	{
		if (arr[i] < arr[j])
		{
			temp[index++] = arr[i++];
		}
		else
		{
			temp[index++] = arr[j++];
		}
	}

	while (i <= half)
	{
		temp[index++] = arr[i++];
	}
	while (j <= end)
	{
		temp[index++] = arr[j++];
	}
	index = 0;
	for (i = start; i <= end; i++)
	{
		arr[i] = temp[index++];
	}
}
