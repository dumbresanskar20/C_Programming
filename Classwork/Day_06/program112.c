#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt == (iNo /2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)                  //void indicate function does not contain any value
{
    int iValue = 0;
    int bRet = false;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet)                   //It returns the value also as true it is only possible if return type is boolean.
    {
        printf("It is Prime Number.");
    }
    else
    {
        printf("It is not a Prime Number");
    }

    return EXIT_SUCCESS;
}