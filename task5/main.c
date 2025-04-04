#include <stdio.h>

void prime(int);
int main()
{
	int num = 0; 
	printf("Enter a number: ");
	scanf("%d", &num);
	
	prime(num);
	return 0;
}
