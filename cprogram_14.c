#include <stdio.h>
int main()
{
    int num, first, last, middle, t, d = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    t = num;
    while(t >= 10)
    {
        t = t / 10;
        d = d * 10;
    }
    first = t;
    middle = (num % d) / 10;
    num = last * d + middle * 10 + first;
    printf("Result = %d", num);
    return 0;
}