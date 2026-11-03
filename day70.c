
#include <stdio.h>
#include <ctype.h>

int main() {//Take a string as input and convert it to sentence case.
    char str[200];
    int i, start = 1;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(start == 1 && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            start = 0;
        }
        else {
            str[i] = tolower((unsigned char)str[i]);
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            start = 1;
        }
    }

    printf("%s", str);

    return 0;
}
