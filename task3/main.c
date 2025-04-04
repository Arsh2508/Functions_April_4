#include <stdio.h>

int factorial(int);
int main()
{
	int num = 0;
	printf("Enter a number to count it's factorial: ");
	scanf("%d", &num);
	printf("The factorial of %d is %d\n", num, factorial(num));
	
	return 0;
}
