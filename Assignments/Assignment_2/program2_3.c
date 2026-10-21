// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays "Hello" for values below 10, otherwise "Demo".
// Input         : An integer
// Output        : "Hello" or "Demo"
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}