#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentence[1000];
    char word[100];
    int found = 0; 
    int index = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    printf("\n********************************\n ");

    printf("\nEnter the word to search for: ");
    scanf("%s", word);

    int sentence_length = strlen(sentence);
    int word_length = strlen(word);

    if (sentence[sentence_length - 1] == '\n')
        sentence[sentence_length - 1] = '\0';


    while (index < sentence_length)
    {
        int i = 0;
        int match = 1;

        while (i < word_length)
        {
            if (sentence[index + i] != word[i])
            {
                match = 0;
                break;
            }
            i++;
        }

        if (match)
        {
            printf("\nWord found, starting index: %d\n", index);
            found = 1;
        }

        index++;
    }

    if (!found)
        printf("\nWORD NOT FOUND!\n");

    return 0;
}
