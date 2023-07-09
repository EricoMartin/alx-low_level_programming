
/**
 * _putchar - function that writes characters to the stdout
 *
 * @c: charcter to be written
 * Return: integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
