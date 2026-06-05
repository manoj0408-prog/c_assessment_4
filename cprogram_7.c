#include <stdio.h>
int main()
{
    int i, a, b;
    for(i = 11; i <= 99; i += 2)
    {
        a = i / 10;
        b = i % 10;
        if(a + b == 7)
        {
            printf("%d", i);
        }
    }
    return 0;
}