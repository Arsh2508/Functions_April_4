#include <stdio.h>

unsigned int fib(int n){
	if(n == 0){
		return 0;
	}
	int a = 0, b = 1, c = 0;
	for(int i = 0; i < n; ++i){
		c = b;
		b = a + b;
		a = c;
	}
	return b;
}
