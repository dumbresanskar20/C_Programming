// ////////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : Returns the multiplications of the Factors of the numbers
// Input         : Accept Number
// Output        : Display Factors multiplication
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);
    
    iRet = MultFact(iValue);  

    printf("%d\n", iRet);

    return 0;
}
