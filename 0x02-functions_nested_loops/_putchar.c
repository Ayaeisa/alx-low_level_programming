#iclude <unistd.h>
/**
 * __putchar -writes the character c to stdout
 * @c: the character to print
 * Return: 0n success 1.
 * 0n error,-1 is returned, and errno is set approriately.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
