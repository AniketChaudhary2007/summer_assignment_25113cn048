#include <stdio.h>
int main()
{
    char str[200];
    int i = 0, words = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' '))
            words++;
        i++;
    }

    printf("%d", words);

    return 0;
}