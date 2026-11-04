// ////////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : Returns the Reverse Factors of the number
// Input         : Accept Number
// Output        : Display Factors in reverse
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n", iNo);

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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
    
    FactRev(iValue);   

    return 0;
}


