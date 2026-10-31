// ////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Print the number is small, medium, long.
// Input         : Integer Number: 10
// Output        : Small / Medium / Long
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}