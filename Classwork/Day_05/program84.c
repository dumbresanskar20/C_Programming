#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is Divisile by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
}


int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);    

    return EXIT_SUCCESS;
}