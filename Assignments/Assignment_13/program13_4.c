// ////////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description   : Multiply Digits in numbers
// Input         : Accept Number
// Output        : Display multiplication of the Digits
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMul = iMul * iDigit;

        iNo = iNo / 10;
    }

    return iMul;

    
}

int main () {

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);
    
    return 0;
  
}