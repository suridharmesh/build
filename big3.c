#include<stdio.h>
void big()
{
    int x=40, y=43, z=3,large;
    printf("Inputted values: %d, %d, %d\n", x,y,z);
    large = x > y ? ( x > z ? x : z) : (y > z ? y : z) ;
    printf("Largest among 3 numbers :  %d\n", large) ;
}