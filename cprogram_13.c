#include <stdio.h>
int main()
{
    int num, d, r = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        d = num % 10;
        r= r * 10 + d;
        num = num / 10;
    }
    printf("Reverse = %d", r);
    return 0;
}