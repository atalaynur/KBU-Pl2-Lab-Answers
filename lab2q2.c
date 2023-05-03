#include <stdio.h>
#define number hmany
int main ()
{
int hmany=0; 
int a[100] ;
int max;

printf("How many numbered series will it be?");
scanf("%d", &hmany);

for ( int i = 0; i < hmany; i++)
{

    printf("%dPlease enter number", i+1);
    scanf("%d", &a[i]);
}


    max= a[0];

    for(int i=0 ; i<number ; i++){
          if(max < a[i])
               max = a[i];

    }

    printf("The largest number%d", max);

return 0;
}


