// ////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : Calculate the amount of the discount on the total amount.
// Input         : Total Amount
// Output        : Discounted price.
// Author        : Sanskar balasaheb dumbre
// Date          : 22/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if ((fAmount > 0) && (fAmount <= 1000))
    {
        printf("Payable Amount: %f", fAmount);
    }
    else if ((fAmount > 1000) && (fAmount <= 5000))
    {
        fDiscount = ( fAmount * 10 ) / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount: %f", fFinalAmount);
    }
    else if (fAmount > 5000)
    {
        fDiscount = ( fAmount * 20 ) / 100;
        fFinalAmount = fAmount - fDiscount;
        
        printf("Payable Amount: %f", fFinalAmount);
    }
    else
    {
        printf("Invalid Amount.");
    }
}

int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase Amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}