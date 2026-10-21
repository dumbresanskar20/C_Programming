// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays a number the specified number of times.
// Input         : An integer and its display frequency
// Output        : The integer repeated at the given frequency
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write updater

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    printf("Enter Frequency :\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}