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

int main()
{
	int arr[5] = { 1, 2, 3, 5, 5 };
	int length = sizeof(arr) / sizeof(int);
	DisplayArr(arr, length);
	DisplayArrPtr(arr, length);
}