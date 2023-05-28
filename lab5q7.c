#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char *strptr = str1;
    char *ptr2 = str2;
    int i = -1;

    printf("\nPointer : print a string in reverse order  \n");
    printf("\n -----------------------------------------  \n");
    printf("\ninput a string: ");
    fgets(str1, sizeof(str1), stdin);

    while (*strptr != '\0')
    {
        strptr++;
        i++;
    }

    while (i >= 0)
    {
        strptr--;
        *ptr2 = *strptr;
        ptr2++;
        --i;
    }

    *ptr2 = '\0';
    printf("Reverse of the string is: %s\n", str2);

    return 0;
}
