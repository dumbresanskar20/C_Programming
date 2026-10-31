// ////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Find the Area of the Rectangle
// Input         : Float Width and Height: 5.3  9.78
// Output        : Area of Rectangle: 51.834
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter Width: ");
    scanf("%f", &fValue1);

    printf("Enter Height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle: %lf", dRet);

    return 0;
}