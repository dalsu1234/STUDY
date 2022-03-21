//#include <iostream>
//
//int main()
//{
//	const int SIZE{10};
//	int arr[SIZE] = { 1,4,5,3,2,1,2,7,8,9 };
//
//	for (int i = 0; i < SIZE-1; i++)
//	{
//		for (int j = 0; j < SIZE-i-1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp{};
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//}



//=========================================
// Àç±ÍÇÔ¼ö
#include <iostream>

void Bubble(int arr[], int j);
void Swap(int& i, int& j);
int main(void)
{

    int arr[5]{ 6,2,4,3,1 };

    Bubble(arr, 4);

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}

void Bubble(int arr[], int j)
{
    if (j <= 0)
    {
        return;
    }

    for (int i = 0; i < j; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            Swap(arr[i], arr[i + 1]);
        }
    }
    Bubble(arr, j - 1);
}

void Swap(int& i, int& j)
{
    int temp{};
    temp = i;
    i = j;
    j = temp;
}