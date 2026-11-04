// ////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : Calculate percentage of obtained marks.
// Input         : Total Marks and Obtained Marks.
// Output        : Returns percentage.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    if(iNo1 == 0)
    {
        return 0.0f;
    }

    fAns = ((float)iNo2 / iNo1) * 100;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.1f%%\n", fRet);

    return 0;
}