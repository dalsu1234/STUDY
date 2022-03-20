//#include <iostream>
//
//int main()
//{
//	const int SIZE{10};
//	int arr[SIZE]{1,5,7,3,2,7,5,4,3,0};
//	int temp{};
//	int j{};
//	for (int i = 1; i < SIZE; i++)
//	{
//		temp = arr[i];
//		j = i;
//		while (j >= 0 && arr[j-1] > arr[j])
//		{
//			arr[j] = arr[j - 1];
//			arr[j - 1] = temp;
//			j--;
//		}
//	}
//	for (int i =0; i<SIZE;i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//}