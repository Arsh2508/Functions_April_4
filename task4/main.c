#include <stdio.h>

int sum(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("The sum of %d's digits is %d\n", num, sum(num));
	return 0;
}
