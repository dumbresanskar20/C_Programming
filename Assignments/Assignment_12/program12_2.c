// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : Check Zero is in Number or not.
// Input         : Accept Number
// Output        : Display zero is present or not
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;

    
}

int main () {

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("It does not contain Zero");
    }
    
    return 0;
  
}