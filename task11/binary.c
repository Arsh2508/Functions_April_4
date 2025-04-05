#include <stdio.h>

int pow_10(int a){
	int res = 1;
	for(int i = 0; i < a; ++i){
		res *= 10;
	}
	return res;
}

int binary(int n){
	
	int bin = (n & 1);
	n >>= 1;
	int i = 1;
	while(n){
		bin += (pow_10(i) * (n & 1));
		n >>= 1;
		++i;
	}
	return bin;
}
