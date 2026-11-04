#include<stdio.h>
#include<stdlib.h>

int main()
{
    int unsigned No = 14;
    int unsigned Ans = 0;

    Ans = ~No;

    printf("%u", Ans);              //  4294967281

    return EXIT_SUCCESS;
}