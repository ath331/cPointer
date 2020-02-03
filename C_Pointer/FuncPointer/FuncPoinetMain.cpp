#include <iostream>

int add(int numA, int numB)
{
	return numA + numB;
}

int sub(int numA, int numB)
{
	return numA - numB;
}

typedef int (*fptrOperator)(int, int);

int compute(fptrOperator fptr, int num1, int num2)
{
	return fptr(num1, num2);
}

int main()
{
	std::cout << compute(add, 10, 20) << std::endl;
	std::cout << compute(sub, 10, 20) << std::endl;
}