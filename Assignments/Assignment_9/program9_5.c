// ////////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : Print the Difference between Evan and Odd Factorial.
// Input         : Integer Number: 5.
// Output        : Factorial Difference is: -7
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;
    int FactDiff = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    FactDiff = iEvenFact - iOddFact;
    
    return FactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is: %d", iRet);

    return 0;
}