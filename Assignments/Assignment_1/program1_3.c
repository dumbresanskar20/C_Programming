// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the numbers from 5 down to 1.
// Input         : None
// Output        : The numbers 5 to 1
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while (i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}