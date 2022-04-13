#include <unistd.h>
/**
 * -putchar -writes the character cto 
 *  @C: The character to print
 *  Return: on success 1.
 *  On error, -1
   */
int -putchar(char c)
{
	return (write(1, &c, 1)));
}
