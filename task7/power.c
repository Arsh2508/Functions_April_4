#include <stdio.h>

int power(int a, int b){
	int res = a;
	for(int i = 1; i < b; ++i){
		res *= a;
	}
	
	return res;
}
