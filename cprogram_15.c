#include <stdio.h>
int main()
{
    int num, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if(lastDigit % 2 != 0)
    {
        num = num - 1;
    }
    printf("Result = %d", num);
    return 0;
}