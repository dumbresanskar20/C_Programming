// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : Displays the number divisible by 3 & 5 both.
// Input         : An integer number
// Output        : Which number is divisible by 3 & 5.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0))
    {
        if(((iValue % 5) == 0))
        {
            printf("Number is Divisile by both 3 & 5. \n");
        }
        else
        {
            printf("Number is only divisible only by 3. \n");
        }
    }
    else
    {
        if(((iValue % 5) == 0))
        {
            printf("Number is Divisile only by 5. \n");
        }
        else
        {
            printf("Number is not Divisile by both 3 & 5. \n");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);    

    return EXIT_SUCCESS;
}
