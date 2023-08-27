#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f_big - A function that finds the largest number
 * 
 * @usrn: username parameter
 * @len: length of username
 * Return: the largest number
 */

int f_big(char *usrn, int len)
{
	int n;
	int vn;
	unsigned int rand_num;

	n = *usrn;
	vn = 0;

	while (vn < len)
	{
		if (n < usrn[vn])
			n = usrn[vn];
		vn += 1;
	}

	srand(n ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f_mult - A funnction that multiplies each char of username
 *
 * @usrn: username parameter
 * @len: length of username
 * Return: multiplied char
 */

int f_mult(char *usrn, int len)
{
	int n;
	int vn;

	n = vn = 0;

	while (vn < len)
	{
		n = n + usrn[vn] * usrn[vn];
		vn += 1;
	}
	return (((unsigned int)n ^ 239) & 63);
}


/**
 * f_rand - Afunction that generates a random char
 *
 * @usrn: username parameter
 *
 * Return: a random char
 */

int f_rand(char *usrn)
{
	int n;
	int vn;

	n = vn = 0;

	while (vn < *usrn)
	{
		n = rand();
		vn += 1;
	}

	return (((unsigned int)n ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, n, vn;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	n = vn = 0;
	while (vn < len)
	{
		n = n + argv[1][vn];
		vn = vn + 1;
	}
	keygen[1] = ((char *)alph)[(n ^ 79) & 63];
	/* ----------- f3 ----------- */
	n = 1;
	vn = 0;
	while (vn < len)
	{
		n = argv[1][vn] * n;
		vn = vn + 1;
	}
	keygen[2] = ((char *)alph)[(n ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f_big(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f_mult(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f_rand(argv[1])];
	keygen[6] = '\0';
	for (n = 0; keygen[n]; n++)
		printf("%c", keygen[n]);
	return (0);
}
