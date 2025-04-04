#include <stdio.h>

int sum(int n){
	int Sum = 0;
	while(n){
		Sum += (n % 10);
		n /= 10;
	}
	return Sum;
}
