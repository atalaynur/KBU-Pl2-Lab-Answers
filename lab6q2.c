#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char* fullName;
    char name[100];
    char surname[100];

printf("what is your name? :");
fgets(name, sizeof(name),stdin);

printf("what is your surname? :");
fgets(surname, sizeof(surname),stdin);

 fullName = (char*)malloc((strlen(name) + strlen(surname) + 2) * sizeof(char));
    strcpy(fullName, name);
    strcat(fullName, " ");
    strcat(fullName, surname);

    printf("Ad ve Soyad: %s", fullName);

    free(fullName);

    return 0;


}