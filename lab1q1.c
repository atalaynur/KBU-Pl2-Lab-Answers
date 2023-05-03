
#include <stdio.h>

int hesapla(float number,int minPoint)
{
    int dizi[100];
    int b = 0;
    float average=0; 
    int fail=0;
    
    for(int i=0;i < number;i++)
        { 
            printf("\n Student grade %d",i+1);
            printf(" :\n");
            scanf("%d", &b);
            dizi[i]=b;
            average += b;

            if(dizi[i]<minPoint)
            {
                fail+=1;

            }

        }

        printf("\n Class average: %2.2f\n", (average/number));

        printf("\n The number of failed students: %d\n", fail);

        return fail;

          }



int main()
{ 
    int student, x ;
    

    printf("\n Please enter the number of students whose grade will be entered: \n") ;
    scanf("%d", &student);
    printf("\nWhat is a passing grade?\n");
    scanf("%d",&x);
    hesapla(student,x);

    

} 


