#include <stdio.h>
int main()
{
    int num, d, s = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        d = num % 10;
        s= s + d;
        num = num / 10;
    }
    printf("Sum of digits = %d", s);
    return 0;
}