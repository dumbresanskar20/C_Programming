// ////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : Displays the Electricity Bill.
// Input         : Number of Units.
// Output        : Amount of Bill.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    if((iUnits > 0) && (iUnits <= 100))
    {
        fBill = iUnits * 5;
        printf("Bill : %f", fBill);
    }
    else if((iUnits > 100) && (iUnits <= 200))
    {
        fBill = iUnits * 7;
        printf("Bill : %f", fBill);
    }
    else
    {
        fBill = iUnits * 10;
        printf("Bill : %f", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}