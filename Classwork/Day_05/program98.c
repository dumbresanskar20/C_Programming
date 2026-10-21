#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULong;
ULong Factorial(int iNo)
{
    int iCnt = 0; 
    unsigned long long iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0;
    ULong iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);  

    printf("Factorial is : %llu \n", iRet);

    return EXIT_SUCCESS;
}
