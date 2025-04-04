#include <stdio.h>

int power(int, int);
int main()
{
	int num = 0, exp = 0;
	printf("Enter num an exp: ");
	scanf("%d %d", &num, &exp);

	printf("%d to %d power is %d\n", num, exp, power(num, exp));
	return 0;
}
