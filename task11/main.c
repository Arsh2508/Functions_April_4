#include <stdio.h>

int binary(int);
int main()
{
	int num = 0;
	do{
		printf("Enter a number: ");	
		scanf("%d", &num);
	}while(num < 0);	// not working for negative number

	printf("The binary representaion of %d is %d\n", num, binary(num));
	return 0;	
}
