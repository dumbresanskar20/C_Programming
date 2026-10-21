// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Displays the year is Leap or not.
// Input         : An Year.
// Output        : Which is Leap Year.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(((iYear % 400) == 0) ||(((iYear % 4) == 0) && ((iYear % 100) != 0)))
    {
        printf(" %d is Leap Year.", iYear);
    }
    else
    {
        printf(" %d is not Leap Year.", iYear);
    }
}

int main()
{
    int iyear = 0;

    printf("Enter year: ");
    scanf("%d", &iyear);

    CheckLeapYear(iyear);

    return EXIT_SUCCESS;
}