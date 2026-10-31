// ////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Print the Table of Given Number in Reverse Order.
// Input         : Integer Number: 10.
// Output        : Reverse Table of 10.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNum)
{
    char *cWord[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if(iNum < 0)
    {
        iNum = -iNum;
        printf("%s", cWord[iNum]);
    }
    else if(iNum >= 0)
    {
        printf("%s", cWord[iNum]);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Single Digit Number (-9 to 9):");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}