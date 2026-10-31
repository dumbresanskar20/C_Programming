// ////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Convert SquareFeet to SquareMeter
// Input         : Enter Area in Square Feet: 5
// Output        : Area in SquareMeter : 0.464500
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

    printf("Area in SquareMeter : %f", dRet);
    return 0;
}