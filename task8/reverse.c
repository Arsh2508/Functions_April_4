#include <stdio.h>

int reverse(int n){
	int rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}
