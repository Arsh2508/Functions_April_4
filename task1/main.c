#include <stdio.h>

void mult_table(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	mult_table(num);
	return 0;
}
