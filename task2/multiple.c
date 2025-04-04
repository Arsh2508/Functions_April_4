#include <stdio.h>

void mult_table(int x){
	printf("This is %d's multiplication table:\n\n", x);
	for(int i = 1; i <= 10; ++i){
		printf("%d * %d = %d\n", x, i, x*i );
	}
	printf("\n");
}
