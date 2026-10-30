// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number line of that number
// Input         : Integer Number: 3
// Output        : -3   -2  -1  0   1   2   3
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = iNo;

    for(iCnt = -iCnt; iCnt <= iNo; iCnt++)
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