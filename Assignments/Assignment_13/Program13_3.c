// ////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : Count digits Between range 3 and 7
// Input         : Accept Number
// Output        : Display digits in range 3 and 7
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("%d", iRet);
    
    return 0;
  
}