#include <stdio.h>
#include <unistd.h>

/*
 * main - the function to print numbers from 1 to 100,
 * multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * return 0.
 */

int main(void)
{
	int a;
	int b;
	int c;
	char *ch1 = "Fizz";
	char *ch2 = "Buzz";
	char *ch3 = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;

		if (b == 0 && c == 0)
		{
			printf("%s", ch3);
		}
		else if (b == 0)
		{
			printf("%s", ch1);
		}
		else if (c == 0)
		{
			printf("%s", ch2);
		}
		else
			printf("%d", a);
		printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
