#include <stdio.h>
#include <stdlib.h>



int main()
{

    void function();

    int a, b, c;
    a = 5;
    b = 6;
    c = 7;
    printf("The value before swapping are:\n");
    printf("element 1=%d\n", a);
    printf("element 2=%d\n", b);
    printf("element 3=%d\n", c);

    fun(&a, &b, &c);

    printf("The value after swapping are:\n");
    printf("element 1=%d\n", c);
    printf("element 2=%d\n", a);
    printf("element 3=%d\n", b);

    return 0;
}

void function(int *a, int *b, int *c)
{
}
