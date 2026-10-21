// ////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : Displays the greater number from two numbers.
// Input         : An integer number
// Output        : Which number is Greater.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater.", iFirst);
    }
    else if(iFirst < iSecond)
    {
        printf("%d is Greater.", iSecond);
    }
    else
    {
        printf("Both %d and %d are equal.", iFirst, iSecond);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}