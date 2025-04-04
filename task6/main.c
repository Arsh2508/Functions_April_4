#include <stdio.h>

int prime_sum(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("represented as sum of two prime numbers = %d\n", prime_sum(num));
	return 0;
}
