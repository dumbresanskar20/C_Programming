// ////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : Displays a row of asterisks for the given count.
// Input         : An integer count (set to 5 in main)
// Output        : A row of asterisks
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept( int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}


int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}