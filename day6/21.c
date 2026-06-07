#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 2;
        binary = binary + rem * place;
        num = num / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}