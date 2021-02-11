//conversion

#include <stdio.h>
int main(){
	//variables
	int a, b, c, d;
	long long int exp=1, sum=0;
	
	
	do{
		printf("Enter a positive integer: ");
		scanf("%d", &a);
	}while(a < 1);
	
	do{
		printf("Enter a positive integer less than 10: ");
		scanf("%d", &b);
	}while(b < 1);
	
	
	if(b > 9){
		printf("Integer should be less than 10!\n");
		return 0;
	}
	
	//body
	
	while(c != 0){
	
		c = a/b;
		d = a%b;
		
		sum = sum + d * exp;
		exp = exp * 10;
		
		a = c;
		
	}
	
	//print

	
	printf("%lld\n", sum);

	return 0;
}
