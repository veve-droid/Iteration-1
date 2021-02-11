//germain

#include <stdio.h>
int main(){
	int num, germ, cf = 2, prime = 1;
	
	do{
		printf("Enter a positive integer: ");
		scanf("%i", &num);
	}while(num < 1);
	
		
	germ = 2 * num +1;
	while((cf * cf <= germ) && (prime == 1)){ 
		if((num%cf == 0 || germ%cf == 0) && (num != 2)){
		 prime = 0; 
		 break;
		}
		cf++; 
		
	}
	
	if(prime == 1 && (num != 1 || num == 2)) 
		printf("%i is a Germain prime.\n", num);
	else
		printf("%i is not a Germain prime.\n", num);
	
	
	return 0;
}

