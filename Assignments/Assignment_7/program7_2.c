// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number till that number.
// Input         : Integer Number: 6
// Output        : 1    2   3   4   5   6
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}