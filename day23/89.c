#include <stdio.h>
int main() 
{
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n' && count[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}