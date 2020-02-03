#include <iostream>

int Add(int numA, int numB)
{
	return numA + numB;
}

int Sub(int numA, int numB)
{
	return numA - numB;
}

typedef int (*fptrOperator)(int, int);
fptrOperator operations[128] = { NULL };

void InitOper()
{
	operations['+'] = Add;
	operations['-'] = Sub;
}

int evaluate(char opcode, int num1, int num2)
{
	fptrOperator operation = NULL;
	operation = operations[opcode];
	return operation(num1, num2);
}

int main()
{
	InitOper();
	std::cout << evaluate('+', 10, 20) << std::endl;
	std::cout << evaluate('-', 10, 20) << std::endl;
}