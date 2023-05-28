#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char W1[100], W2[100];

    printf("1. WORD: ");
    scanf("%s", W1);

    printf("\n2. WORD: ");
    scanf("%s", W2);

   
    if (strcmp(W1, W2) == 0)
    {
        printf("\n THE WORDS ARE THE SAME.\n");
    }


    else
    {
        int length1 = strlen(W1);
        int length2 = strlen(W2);

    if (length1 > length2)
        {
        printf("THE FIRST WORD IS LONGER.\n");
        }
    else if (length2 > length1)
        {
        printf("THE SECOND WORD IS LONGER.\n");
        }
    else
        {
        printf("THE WORD LENGTHS ARE EQUAL TO EACH OTHER\n");
        }
    }

    return 0;
}
