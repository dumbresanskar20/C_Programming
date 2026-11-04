// ////////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : Count Difference between summation of the even and odd digits
// Input         : Accept Number
// Output        : Display Difference between summation
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;

    
}

int main () {

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);
    
    return 0;
  
}