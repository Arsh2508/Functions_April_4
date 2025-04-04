#include <stdio.h>

int prime(int n){
	
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= n/2; ++i){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int prime_sum(int num){
	
	for(int i = 2; i < num/2; ++i){
		if(prime(i) && prime(num - i)){	 //checks if 'i' and 'num-1' are prime numbers
			return 1;
		}
	}
	return 0;

}




