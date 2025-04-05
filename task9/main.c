#include <stdio.h>

void hex(int, char*);
int main()
{	
	char arr[32] = {};
	int num = 0;
	do{
		printf("Enter a number: ");
		scanf("%d", &num);
	}while(num < 0);		//is not working for negative numbers

	printf("%d in hexidecimal is ", num);
	hex(num, arr);
	return 0;
}
