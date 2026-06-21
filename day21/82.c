#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, temp = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                temp = 0;
                break;
            }
        }
    }

    if (temp==1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}