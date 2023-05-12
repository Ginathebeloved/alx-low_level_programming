#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("lets see what is in argv[]\n");

	for(i = 0; 1 < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
