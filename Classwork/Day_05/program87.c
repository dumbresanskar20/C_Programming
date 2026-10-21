#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0))
    {
        if(((iNo % 5) == 0))
        {
            printf("Number is Divisile by both 3 & 5. \n");
        }
        else
        {
            printf("Number is only divisible by 3. \n");
        }
    }
    else
    {
        if(((iNo % 5) == 0))
        {
            printf("Number is Divisile by 5. \n");
        }
        else
        {
            printf("Number is not Divisile by both 3 & 5. \n");
        }
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
