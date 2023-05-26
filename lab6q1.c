#include <stdio.h>
#include <stdlib.h>


int main()
{

int numberofelements;
int i;

printf("how many elements do you have? ");
scanf("%d", &numberofelements);

int* data = (int*)calloc(numberofelements, sizeof(int));

for (int i = 0; i < numberofelements; i++) {
    printf("%d. ", i+1);
    scanf("%d", &data[i]);
}
int max = data[0];
for (int i = 1; i < numberofelements; i++) {
    if (data[i] > max) {
        max= data[i];
    }
}

printf("The biggest value: %d\n", max);

return 0;
}