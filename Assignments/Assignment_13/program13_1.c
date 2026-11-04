// ////////////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Description   : Count Even digits 
// Input         : Accept Number
// Output        : Display Even Digits
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;

    
}

int main () {

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d", iRet);
    
    return 0;
  
}