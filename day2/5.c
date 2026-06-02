#include <stdio.h>
int main() 
{
    int num, sum = 0, cd;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        cd = num % 10;
        sum += cd;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}