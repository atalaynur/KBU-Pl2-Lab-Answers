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

   fullName = (char*)malloc((strlen(name) + 1) * sizeof(char));
   strcpy(fullName, name);

printf("what is your surname? :");
fgets(surname, sizeof(surname),stdin);

   int surnameLength = strlen(surname);
   
   fullName = (char*)realloc(fullName, (strlen(name) + surnameLength + 2) * sizeof(char));
    
    strcat(fullName, surname);
    printf("NAME AND SURNAME: %s", fullName);

    free(fullName);

    return 0;
}