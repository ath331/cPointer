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

fptrOperator select(char a)
{
	switch (a)
	{
	case '+':
			return add;
	case '-':
		return sub;
	default:
		break;
	}
}

int evaluate(char opcode, int num1, int num2)
{
	fptrOperator operation = select(opcode);
	return operation(num1, num2);
}

int main()
{
	std::cout << evaluate('+', 10, 20) << std::endl;
	std::cout << evaluate('-', 10, 20) << std::endl;
}