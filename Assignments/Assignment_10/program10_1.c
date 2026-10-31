// ////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Find the Area of the Circle
// Input         : Float Radius: 5.3
// Output        : Area of Circle: 88.202606
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double fArea = 3.14 * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle: %lf", dRet);

    return 0;
}