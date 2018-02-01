#include <stdio.h>
void rev()
{
    int n=34532, reversedNumber = 0, remainder;
    printf("Inputed number: %d\n", n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d\n", reversedNumber);

}