// ////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Print the Table of Given Number in Reverse Order.
// Input         : Integer Number: 10.
// Output        : Reverse Table of 10.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}