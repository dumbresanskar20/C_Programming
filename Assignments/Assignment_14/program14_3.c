// ////////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : Returns the Non Factors of the number
// Input         : Accept Number
// Output        : Display Non Factors 
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    printf("Non-Factors of %d are : \n", iNo);

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}