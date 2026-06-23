#include <stdio.h>
int main() 
{
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            count[(unsigned char)str[i]]++;
            if (count[(unsigned char)str[i]] == 2) {
                printf("First repeating character: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.");

    return 0;
}