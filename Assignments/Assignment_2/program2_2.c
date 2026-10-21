// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the given number of asterisks.
// Input         : An integer count
// Output        : A row of asterisks
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while( iNo > iCnt)
    {
        printf("*");
        iNo --;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}