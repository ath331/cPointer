#include <iostream>

int square(int num)
{
	return num * num;
}

int main()
{
	int num = 10;
	int (*fptr)(int);

	fptr = square;
	std::cout << num << " square " << fptr(num) << std::endl;
}