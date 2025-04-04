#include <stdio.h>

int factorial(int f){
	int res = 1;
	for(int i = 2; i <= f; ++i){
		res *= i;
	}
	return res;
}
