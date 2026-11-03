
#include <stdio.h>

int main() {//Take source and destination filenames, then copy the contents using fgetc() and fputc().
    FILE *source, *destination;
    char file1[100], file2[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", file1);

    printf("Enter destination filename: ");
    scanf("%99s", file2);

    source = fopen(file1, "r");

    if(source == NULL) {
        printf("Source file not found!");
        return 1;
    }

    destination = fopen(file2, "w");

    if(destination == NULL) {
        printf("Cannot create destination file!");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully!");

    return 0;
}
