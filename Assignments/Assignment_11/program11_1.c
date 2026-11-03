// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : Display number in between Range.
// Input         : Accept Starting and Ending Number
// Output        : Display number betwwen Starting and Ending Numbers
// Author        : Sanskar Balasaheb Dumbre
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Input.");
    } 

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);
    
    RangeDisplay(iValue1, iValue2);

    return 0;
}