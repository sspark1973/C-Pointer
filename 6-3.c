/*
fgets() / gets() / scanf()
Input : "Park Sung Sik"

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *name;

	name = (char *)malloc(sizeof(char)*10);

	printf("Input string:\n");
	fgets(name, 10, stdin);
	//*(name + (strlen(name) - 1)) = '\0';
	printf("fgets name=[%s] strlen[%d]\n", name, strlen(name));
	fflush(stdin);

	printf("Input string:\n");
	scanf("%s", name);
	printf("scanf name=[%s] strlen[%d]\n", name, strlen(name));
	fflush(stdin);

	printf("Input string:\n");
	gets(name);
	printf("gets name=[%s] strlen[%d]\n", name, strlen(name));
	fflush(stdin);

	return 0;
}
