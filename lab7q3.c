#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


    
    int main()
    {

        void letters();
        char text[1000];

        printf("Enter the text: ");
        fgets(text, sizeof(text), stdin);

        letters(text);

        return 0;
    }
    
    
    void letters(char *text)
    {
        int *countTheletters = (int *) calloc(29, sizeof(int));

        if (countTheletters == NULL)
            {
                printf("Memory could not be allocated");
                return;
            }

    while (*text)
        {
            char c = tolower(*text);

            if (isalpha(c))
                {
                    countTheletters[c - 'a']++;
                }
                text++;
        }



    for (int i = 0; i < 29; i++)
        {

            if (countTheletters[i] > 0)
                {
                    printf("%d x '%c' \n", countTheletters[i], 'a' + i);
                }
        }

        free(countTheletters);
        }




