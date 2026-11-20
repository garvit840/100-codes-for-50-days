#include <stdio.h>

int main() {//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
    FILE *fp;
    char filename[100];
    char line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!");
    } 
    else {
        printf("File opened successfully.\n");

        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }

        fclose(fp);
    }

    return 0;
}