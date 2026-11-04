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

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
    
}

int main () {

    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);
    
    return 0;
  
}