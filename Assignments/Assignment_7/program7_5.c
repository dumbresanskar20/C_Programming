// ////////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Print the first five multiple of the Given number.
// Input         : Integer Number: 10
// Output        : 10    20    30    40    50
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = iNo;
    int iMul = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
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

    MultipleDisplay(iValue);

    return 0;
}