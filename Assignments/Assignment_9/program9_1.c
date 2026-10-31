// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number of * and #.
// Input         : Integer Number: 5.
// Output        : *    *   *   *   *   #   #   #   #   #
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int i = 0, j = 0; 
    for(i = 0; i <= iNo; i++)
    {
        printf("*");
    }
    for(j = 0; j <= iNo; j++)
    {
        printf("#");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}