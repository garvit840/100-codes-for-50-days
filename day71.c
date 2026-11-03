
#include <stdio.h>

int main() {//Create info.txt, take the user's name and age, and save them using fprintf().
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved!");

    return 0;
}
