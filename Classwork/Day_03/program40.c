#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number 1: \n");
    scanf("%d\n", &iValue1);

    printf("Enter Number 2: \n");
    scanf("%d\n", &iValue2);

    if (iValue1 > iValue2)
    {
        printf("%d is Largest.\n", &iValue1);

    }
    else
    {
        printf("%d is Largest.\n", &iValue2);
    }
    return EXIT_SUCCESS;
}