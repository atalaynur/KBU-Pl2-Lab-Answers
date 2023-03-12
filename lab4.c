#include <stdio.h>
#define number hmany
int main ()
{
int hmany=0; 
int a[100] ;
int max;

printf("kaç sayılık bir dizi olacak?");
scanf("%d", &hmany);

for ( int i = 0; i < hmany; i++)
{

    printf("%dlütfen sayı giriniz", i+1);
    scanf("%d", &a[i]);
}


    max= a[0];

    for(int i=0 ; i<number ; i++){
          if(max < a[i])
               max = a[i];

    }

    printf("en büyük sayı %d", max);

return 0;
}


