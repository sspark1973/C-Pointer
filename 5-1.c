/*
main
*/
#include <stdio.h>

int main(int argc, char **argv, char **env)
{
	int i;
	
	printf("argc : [%d]\n", argc);

	for (i=0; i < argc; i++) {
		printf("argv[%d] = [%s]\n", i, *argv++);
	}

	for (i=0; i < 10; i++) {
		printf("env[%d] = [%s]\n", i, *env++);
	}

	return 0;
}
