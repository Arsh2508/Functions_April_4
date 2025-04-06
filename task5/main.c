#include <stdio.h>

int prime(int);
int main()
{
	int num = 0; 
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Number is prime = %d\n", prime(num));
	return 0;
}
