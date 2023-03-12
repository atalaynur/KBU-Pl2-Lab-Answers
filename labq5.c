#include <stdio.h>

int sum(int);

int main(){
	int number;
	printf("please enter a number:"); 
    
    scanf("%d",&number);
	
	printf("\nresult: %d",sum(number));
	
	return 0;
}

int sum(int x){
	if(x==0)
		return 0;
		
	else
		return x%10 + sum(x/10);	
}