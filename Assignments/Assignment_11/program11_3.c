// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description   : Display Addition of the Given range numbers
// Input         : Accept Starting and Ending Number
// Output        : Display Addition
// Author        : Sanskar Balasaheb Dumbre
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart > iEnd) || (iStart < 0))
    {
        printf("Invalid Input.\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;

}


int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Number: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Number: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is: %d", iRet);

    return 0;

}