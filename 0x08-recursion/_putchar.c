#include <unistd.h>

/** putchar
* @c: character value
* Return: character value 
*/

int _putchar(char n){
	return write(STDOUT_FILENO, &c, 1);
}
