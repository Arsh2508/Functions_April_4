#include <stdio.h>

void prime(int n){
	
	if(n < 2){
		printf("%d is not prime number\n", n);
		return;
	}
	for(int i = 2; i <= n/2; ++i){
		if(n % i == 0){
			printf("%d is not prime number \n", n);
			return;
		}
	}
	printf("%d is prime number\n", n);
}
