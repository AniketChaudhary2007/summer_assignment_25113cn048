#include <stdio.h>
int palindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = palindrome(num);

    if (result == 1)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

