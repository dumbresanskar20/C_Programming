// ////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Print the INR value of the given Dollar.
// Input         : Integer Number: 10.
// Output        : Value in INR is : 700
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iInr = 0;
    
    iInr = iNo * 70;
    
    return iInr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d", iRet);
    return 0;
}