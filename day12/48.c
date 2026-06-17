#include <stdio.h>
int perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = perfect(num);

    if (result == 1)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
