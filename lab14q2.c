#include <stdio.h>

int countSETbits(int);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int setBits = countSETbits(number);
    printf("\n");
    printf("The number of bits in the number 1 is: %d\n", setBits);

    return 0;
}

int countSETbits(int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}