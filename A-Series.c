//series

#include <stdio.h>
int main(){
	int num, four, seven, count;
	
	do{
		printf("Enter a positive number: ");
		scanf("%i", &num);
	}while(num < 1);
	
	for(four=0, seven=0, count=1; count<=num; count++){
	
		if(count%4==3 || count%4==0) {
			seven = seven + 7;
			printf("%i ",seven);
			}
		else {
			four = four + 4;
			printf("%i ",four);
			}
			
		}
	
	printf("\n");
	return 0;

}
