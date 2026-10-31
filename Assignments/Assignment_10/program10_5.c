// ////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Convert Fahrenheit to Celcius
// Input         : Enter Temperature in Fahrenheit: 10
// Output        : Temperature in Celcius is : -12.222222
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    float iSqrMtr = 0.0f;

    iSqrMtr = iValue * 0.0929;

    return iSqrMtr;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet:");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Temperature in Celcius is : %f", dRet);
    return 0;
}