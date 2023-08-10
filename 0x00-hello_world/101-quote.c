#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with write function
 *		write(int fd,const void * buf,size_t count )
 *
 * Return:  1 (error)
 */
int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, word, 59);
	return (1);
}
