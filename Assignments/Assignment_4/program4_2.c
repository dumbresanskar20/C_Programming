// ////////////////////////////////////////////////////////////////
//
// Function Name : ChecEvenOdd
// Description   : Displays the given number is Even or Odd
// Input         : An integer number
// Output        : Number is Even/Odd
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}