#include <stdio.h>
#include <stdlib.h>

void PrintBinary(unsigned int);

int main()
{

    unsigned int answer1 = 125 >> 2;
    printf("125 >> 2 = %u  (binary: ", answer1);
    PrintBinary(answer1);
    printf(")\n");

printf("\n");

    unsigned int answer2 = 5 | 12;
    printf("5 | 12 = %u  (binary: ", answer2);
    PrintBinary(answer2);
    printf(")\n");

printf("\n");

    unsigned int answer3 = 5 & 12;
    printf("5 & 12 = %u (binary: ", answer3);
    PrintBinary(answer3);
    printf(")\n");

printf("\n");

    unsigned int answer4 = 5 ^ 12;
    printf("5 ^ 12 = %u (binary: ", answer4);
    PrintBinary(answer4);
    printf(")\n");

    return 0;
}

void PrintBinary(unsigned int num)
{
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}