
#include <stdio.h>

int main()
{
    float boy;
    int kilo;
    int kitleindeks;
     
    printf("Boyunuzu giriniz (1.75): ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz: ");
    scanf("%d",&kilo);
     
    kitleindeks = kilo / (boy * boy);
    printf("Beden Kitle indeksi = %d\n",kitleindeks);
     
    if(kitleindeks < 18){
        printf("Zayif");
    }
    else if(kitleindeks < 25){
        printf("Normal");
    }
    else if(kitleindeks < 30){
        printf("Hafif sisman");
    }
    else if(kitleindeks < 35){
        printf("Sisman");
    }
    else{
        printf("Obez");
    }
    
}