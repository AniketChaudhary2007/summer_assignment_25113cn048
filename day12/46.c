#include <stdio.h>
int armstrong(int n)
{
    int temp = n, rem, sum = 0;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = armstrong(num);

    if (result == 1)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong number");

        return 0;
}