#include <stdlib.h>
#include <time.h>
/**
*main - this is funtion
*return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	rand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	/*if the number is greater than 0*/
		printf("is possitive\n");
	}
	else if (n == 0)
	{
	/*if the number is 0*/
		printf("is zero\n");
	} else if (n < 0)
	{
	/*if the number is less than 0*/
		printf("is negative\n");
	}
	return (0);
}
