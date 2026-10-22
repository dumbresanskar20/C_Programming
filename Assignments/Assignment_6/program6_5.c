// ////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Description   : Calculate the amount of the bonus on the salary.
// Input         : Total Salary
// Output        : Bonus Amount.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 22/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYear)
{
    float fBonus = 0.0f;
    if(iYear > 10)
    {
        fBonus = ( fSalary * 15 ) / 100;
        printf(" Bonus : %f", fBonus);
    }
    else if((iYear >= 5) && (iYear <= 10))
    {
        fBonus = ( fSalary * 10 ) / 100;
        printf(" Bonus : %f", fBonus);
    }
    else if((iYear >= 0) && (iYear < 5))
    {
        fBonus = ( fSalary * 5 ) / 100;
        printf(" Bonus : %f", fBonus);
    }
    else
    {
        printf("Enter Valid Year of Service.");
    }
    

}

int main()
{
    float fSalary = 0.0f;
    int iYear = 0;

    printf("Enter Salary and Year of Service: ");
    scanf("%f %d", &fSalary, &iYear);

    CalculateBonus(fSalary, iYear);

    return EXIT_SUCCESS;
}