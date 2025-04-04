#include <stdio.h>

int reverse(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The reverse is %d\n", reverse(num));
	return 0;
}
