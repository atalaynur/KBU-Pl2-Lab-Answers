#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    int counter=0,numberOfwords=1;

    printf("Enter the text:");
    fgets(text, sizeof(text),stdin);

    while(text[counter] != '\0')
    {
        char character= text[counter];

        if(character == ' ')
        
        counter++;
        numberOfwords++;
    
    }

     printf("There are %d words in the sentence .", numberOfwords);

        return 0;
}
