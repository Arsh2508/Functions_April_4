#include <stdio.h>

unsigned int fib(int);
int main(){

	int num = 0;
	do{
		printf("Enter a non-negative number: ");
		scanf("%d", &num);
	}while(num < 0);
		
	printf("The %d'th fibonacci number is  %u\n", num, fib(num));
	return 0;
}
