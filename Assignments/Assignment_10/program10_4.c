// ////////////////////////////////////////////////////////////////
//
// Function Name : FhToCs
// Description   : Convert Fahrenheit to Celcius
// Input         : Enter Temperature in Fahrenheit: 10
// Output        : Temperature in Celcius is : -12.222222
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelcius = 0;
    
    dCelcius = ((fTemp - 32) * (5.0 / 9.0));
    
    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fValue);

    fRet = FhToCs(fValue);

    printf("Temperature in Celcius is : %f", fRet);
    return 0;
}