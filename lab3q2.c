#include <stdio.h>


int main()
{

int oddcount();

 int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(number) / sizeof(number[0]);

    int odd = oddcount(number, size);
    printf("The number of odd numbers in the sequence: %d\n", odd);

    return 0;
}

int oddcount(int *arr, int size) {
    if (size == 0) { 
        return 0;
    }
    
    return (*arr % 2 == 1 ? 1 : 0) + oddcount(arr + 1, size - 1);
}







