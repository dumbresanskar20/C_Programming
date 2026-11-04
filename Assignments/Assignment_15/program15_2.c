// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Description   : Check whether the given number is greater than 100.
// Input         : Integer
// Output        : Returns TRUE if number is greater than 100, otherwise returns FALSE.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}