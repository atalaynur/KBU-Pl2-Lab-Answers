#include <stdio.h>
#include <stdlib.h>

int main()
{
int size;
printf("Enter the array size: ");
scanf("%d", &size);

 int* array = (int*)malloc(size * sizeof(int));
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d: ", i+1);
        scanf("%d", &array[i]);

}

    int newsize;
  
    printf("Enter new the array size: ");
    scanf("%d", &newsize);
    array = (int*)realloc(array, newsize * sizeof(int));

    printf("Enter the new array elements:\n");
    for (int i = size; i < newsize; i++) {
        printf("%d: ", i+1);
        scanf("%d", &array[i]);
    }
        printf("Array elements:\n");
    for (int i = 0; i < newsize; i++) {
       
    }
    
    printf("\n");

     free(array);

    return 0;

    }
