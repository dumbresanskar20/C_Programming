// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Description   : Displays 1 and the even factors of an integer.
// Input         : An integer
// Output        : 1 and the even factors of the integer
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo / 2; i++)
    {
        if((i == 1) || (iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}