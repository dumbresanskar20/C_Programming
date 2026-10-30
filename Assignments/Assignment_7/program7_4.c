// ////////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Print the odd number till Entered number.
// Input         : Integer Number: 10
// Output        : 1    3     5     7     9
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = iNo;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}