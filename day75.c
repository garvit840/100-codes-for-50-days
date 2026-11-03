
#include <stdio.h>

int main() {//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Text appended successfully!");

    return 0;
}
