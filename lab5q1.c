#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 10;
    int *p;
    p = &var;

    printf("Address of var is : %p \n ", &var);
    printf("Address of var is : %p \n", p);

    printf("Value of var is: %d \n", var);
    printf("Value of var is: %d \n", *p);
    printf("Value of var is: %d \n", *(&var)  );

    printf("Volue of pointer P is : %p",p);
    printf("Address of pointer P is : %p",&p);

    return 0;
}

