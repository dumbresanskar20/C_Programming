// ////////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : Print the Even Factorial of Number
// Input         : Integer Number: 5.
// Output        : Even Factorial of Number is: 8
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is: %d", iRet);

    return 0;
}