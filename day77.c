#include <stdio.h>
#include <ctype.h>

int main() {//rite a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL) {
        printf("Error opening input.txt");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Text converted and written to output.txt");

    return 0;
}