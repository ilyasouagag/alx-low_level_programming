#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int j, a;
	size_t len, add;
	char *c;
	char p[7] = "      ";

	c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = c[(len ^ 59) & 63];
	for (j = 0, add = 0; j < len; j++)
		add += argv[1][j];
	p[1] = c[(add ^ 79) & 63];
	for (j = 0, a = 1; j < len; j++)
		a *= argv[1][j];
	p[2] = c[(a ^ 85) & 63];
	for (a = argv[1][0], j = 0; j < len; j++)
		if ((char)a <= argv[1][j])
			a = argv[1][j];
	srand(a ^ 14);
	p[3] = c[rand() & 63];
	for (a = 0, j = 0; j < len; j++)
		a += argv[1][j] * argv[1][j];
	p[4] = c[(a ^ 239) & 63];
	for (a = 0, j = 0; (char)j < argv[1][0]; j++)
		a = rand();
	p[5] = c[(a ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
