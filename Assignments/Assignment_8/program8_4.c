// ////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Print the Table of Given Number.
// Input         : Integer Number: 10.
// Output        : Table of 10.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t", iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}