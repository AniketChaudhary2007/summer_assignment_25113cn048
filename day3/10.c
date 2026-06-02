#include <stdio.h>
int main()
 {
    int ini, fin, i, j, isPrime;

    printf("Enter the starting number: ");
    scanf("%d", &ini);

    printf("Enter the ending number: ");
    scanf("%d", &fin);

    printf("Prime numbers between %d and %d are:\n", ini, fin);

    for (i = ini; i <= fin; i++) 
    {
        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime==1)
            printf("%d ", i);
    }

    return 0;
}