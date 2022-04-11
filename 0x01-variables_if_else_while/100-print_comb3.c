#include <stdio.h>

/**
 * main  Prints all possible combination of two different digits,
 *       in asccinding order, separtaed by comma followed by space.
 *Return Always 0>
 */
int main(void)
{
  int digit1, digit2;
  for (digit1 = 0; digit1 < 9; digit1++)
    {
      for  (digit2 = digit1 + 1; digit2 < 10; digit2++)
	{
	  Putchar((digit1 % 10) + '0');
	  Putchar((digit2 % 10) + '0');

	    if (digit1 == 8 && digit2 == 9)
	      continue;
	  Putchar(',');
	  Putchar(' ');
	    }
    }
  Putchar('\n');
  return (0);
}
