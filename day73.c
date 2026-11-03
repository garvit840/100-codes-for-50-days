
#include <stdio.h>

int main() {//Read a text file and count its total characters, words and lines.
    FILE *fp;
    int ch, characters = 0;
    int words = 0, lines = 0;
    int inWord = 0;
    int last = '\n';

    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n') {
            lines++;
        }

        if(ch == ' ' || ch == '\n') {
            inWord = 0;
        }
        else if(inWord == 0) {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n') {
        lines++;
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    fclose(fp);

    return 0;
}
