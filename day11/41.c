#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, Sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    Sum = sum(num1, num2);

    printf("Sum = %d", Sum);

    return 0;
}