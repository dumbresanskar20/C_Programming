// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : Displays the numbers divisible by 5
// Input         : An integer number
// Output        : Which number is divisible by 5
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Number is Divisile by 3");
    }
    else
    {
        printf("Number is not divisible by 3");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);    

    return EXIT_SUCCESS;
}