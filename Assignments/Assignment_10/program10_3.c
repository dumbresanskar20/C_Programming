// ////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Convert the KM to Meter
// Input         : Enter Distance: 10
// Output        : Distance in Meter is : 10000
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMtr = 0;
    
    iMtr = iNo * 1000;
    
    return iMtr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Temperature in Celcius is : %d", iRet);
    return 0;
}