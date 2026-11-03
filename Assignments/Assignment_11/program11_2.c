// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description   : Display Even number in between Range.
// Input         : Accept Starting and Ending Number
// Output        : Display Even number betwwen Starting and Ending Numbers
// Author        : Sanskar Balasaheb Dumbre
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Input.");
    } 

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);
    
    RangeDisplayEven(iValue1, iValue2);

    return 0;
}