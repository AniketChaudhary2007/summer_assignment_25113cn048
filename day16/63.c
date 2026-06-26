#include <stdio.h>
int main()
{
    int n, i, j, sum, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                printf("Pair: %d %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found");

    return 0;
}