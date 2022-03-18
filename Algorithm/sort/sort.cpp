#include <iostream>

void PrintArray(int input[], int size)

{

    for (int i = 0; i < size; ++i)

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

// Sequential Sort

// Time Complexity : O(n^2)

// Space Complexity : O(n)

void SequentialSort(int input[], int size)

{

    for (int i = 0; i < size - 1; ++i)

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


// Selection Sort

// Time Complexity : O(n^2)

// Space Complexity : O(n)

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


// Bubble Sort

// Time Complexity : O(n^2)

// Space Complexity : O(n)

void BubbleSort(int input[], int size)

{

    for (int phase = 0; phase < size - 1; ++phase)

    {

        for (int left = 0; left < size - 1 - phase; ++left)

        {

            if (input[left] > input[left + 1])

            {

                Swap(input[left], input[left + 1]);

            }

        }

    }

}




// Insertion Sort

// Time Complexity : O(n^2)

// Space Complexity : O(n)

void InsertionSort(int input[], int size)

{

    for (int i = 1; i < size; ++i)

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

//-----------------------------------------------------------------




// Merge Sort




void Merge(int input[], int start, int half, int end, int temp[])

{

    int i = start;

    int j = half + 1;

    int tempIndex{};



    while (i <= half && j <= end)

    {

        if (input[i] < input[j])

        {

            temp[tempIndex++] = input[i++];

        }
        else

        {

            temp[tempIndex++] = input[j++];

        }

    }



    while (i <= half)

    {

        temp[tempIndex++] = input[i++];

    }

    while (j <= end)

    {

        temp[tempIndex++] = input[j++];

    }



    tempIndex = 0;

    for (int i = start; i <= end; ++i)

    {

        input[i] = temp[tempIndex++];

    }

}




void MergeSort(int input[], int start, int end, int temp[])

{

    // base case

    if (start >= end)

    {

        return;

    }



    int half = (start + end) / 2;

    MergeSort(input, start, half, temp);

    MergeSort(input, half + 1, end, temp);

    Merge(input, start, half, end, temp);

}


int main()

{

    const int SIZE{ 5 };

    int array[SIZE]{ 8, 7, 2, 3, 1 };

    int tempArray[SIZE]{};



    // SORT

    //SequentialSort(array, SIZE);

    //SelectionSort(array, SIZE);

    //BubbleSort(array, SIZE);

    //InsertionSort(array, SIZE);

    MergeSort(array, 0, SIZE - 1, tempArray);

    PrintArray(array, SIZE);


}