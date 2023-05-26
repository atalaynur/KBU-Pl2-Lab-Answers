#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* sentence;
    int maxsentencelength = 1000; 
    int numberofwords = 0;

    sentence = (char*)malloc(maxsentencelength * sizeof(char));


    printf("Enter a sentence: ");
    fgets(sentence, maxsentencelength, stdin);


    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            numberofwords++;
        }
    }


    char** words = (char**)malloc(numberofwords * sizeof(char*));


        char* word = strtok(sentence, " \n");
        int index = 0;
        while (word != NULL) {
        words[index] = (char*)malloc((strlen(word) + 1) * sizeof(char));
        strcpy(words[index], word);
        word = strtok(NULL, " \n");
        index++;
    }

    printf("Words written backwards: ");
    for (int i = numberofwords - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    for (int i = 0; i < numberofwords; i++) {
        free(words[i]);
    }
    free(words);
    free(sentence);

    return 0;
}
