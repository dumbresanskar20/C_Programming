// ////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Print the number is small, medium, long.
// Input         : Integer Number: 10
// Output        : Small / Medium / Long
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);  

    printf("Factorial of number is : %d\n", iRet);

    return 0;
}
