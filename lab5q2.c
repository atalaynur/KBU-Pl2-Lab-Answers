#include <stdio.h>
#include <stdlib.h>


int main()
{
    void sum();

    int a, b, result;
    printf("enter first number:");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);

    sum(&a, &b, &result);
    printf("the total of the entered numbers is:%d", result);
    return 0;
}

void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}
