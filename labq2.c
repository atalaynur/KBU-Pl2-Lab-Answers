
#include <stdio.h>

int main()
{
    float height;
    int weight;
    int BodyMassIndex;
     
    printf("\n enter your height(m):\n ");
    scanf("%f",&height);
    printf("\nenter your weight:\n");
    scanf("%d",&weight);
    BodyMassIndex = weight / (height * height);
    printf("\nBody Mass Index = %d\n",BodyMassIndex);
     

    if(BodyMassIndex < 18){
        printf("\nweak\n");
    }
    if(BodyMassIndex < 25){
        printf("\nnormal\n");
    }
    if(BodyMassIndex < 30){
        printf("\nslightly fat\n");
    }
    else if(BodyMassIndex < 35){
        printf("\nfat\n");
    }
    else{
        printf("\nobese\n");
    }
    
}