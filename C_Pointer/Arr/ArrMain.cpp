#include <iostream>

void DisplayArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void DisplayArrPtr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}

void Display2DArrPtr(int arr[][5],int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	/*int arr[5] = { 1, 2, 3, 5, 5 };
	int length = sizeof(arr) / sizeof(int);
	DisplayArr(arr, length);
	DisplayArrPtr(arr, length);*/

	int arr2D[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	Display2DArrPtr(arr2D, 2);
}