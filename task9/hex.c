#include <stdio.h>

void hex(int n, char* arr){
	if(n == 0){
		arr[0] = '0';
		arr[1] = '\0';
		printf("%c \n", arr[0]);
		return;
	}

	int temp = 0; 
	int i = 0;
	while(n){
		temp = n % 16;
		if(temp > 9){
			arr[i++] = 'A'+ (temp - 10);
		} else{
			arr[i++] = '0'+ temp;
		}
		n /= 16;
	}
	arr[i] = '\0';

	for(int j = 0; j < i/2; ++j){
		int l = i - j - 1;	// for good visibility
		arr[j] ^= arr[l];
		arr[l] ^= arr[j];
		arr[j] ^= arr[l];
	}
	
	for(int j = 0; j < i; ++j){
		printf("%c", arr[j]);
	}printf("\n");
	return;
}




