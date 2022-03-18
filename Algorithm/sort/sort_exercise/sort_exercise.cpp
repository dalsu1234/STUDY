#include <iostream>

void PrintArray(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
}

void Swap(int& value1, int& value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}


// 시간 복잡도 O(n^2)
// 공간 복잡도 O(n) , O(1)
void SequentialSort(int input[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (input[i] > input[j])
            {
                Swap(input[i], input[j]);
            }
        }
    }
}


// selection Sort
// 시간 복잡도 O(n^2)
// 공간 복잡도 O(n) , O(1)
void SelectionSort(int input[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int minIndex = i;
        for (int j = i; j < size; ++j)
        {
            if (input[minIndex] > input[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            Swap(input[i], input[minIndex]);
        }
    }
}

//Bubble Sort
// 시간 복잡도 O(n^2)
// 공간 복잡도 O(n) , O(1)

void BubbleSort(int input[], int size)
{
    int temp{};
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (input[i] > input[i + 1])
            {
                Swap(input[i], input[i + 1]);
            }
        }
    }
}

//insertion Sort
// 시간 복잡도 O(n^2)
// 공간 복잡도 O(n) , O(1)

void InsertionSort(int input[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        int target = input[i];
        while (--j >= 0 && target < input[j])
        {
            input[j + 1] = input[j];
            input[j] = target;
        }
    }
}

//-------------------------------------

//MergeSort

void MergeSort()
{
}

int main()
{
    const int size{ 5 };
    int array[size]{ 8,7,2,3,1 };

    SequentialSort(array, size);

    BubbleSort(array, size);
    InsertionSort(array, size);
    PrintArray(array, size);
}
