#include <stdio.h>
int main()
{
    int n, i, j, count, maxCount = 0, element;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxCount);

    return 0;
}