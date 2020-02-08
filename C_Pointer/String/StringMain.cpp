#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	const char temp[3] = { "aa" };
	const char* tempPtr = temp;

	for (int i = 0; i < 2; i++)
		printf("%c", temp[i]);
	printf("\n");

	char* header = NULL;
	header = (char*)malloc(strlen("aa") + 1);
	//strcpy(header, "bb");
}