#include<stdio.h>
#include<stdlib.h>

int Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;
    fAns = (iNo1 + iNo2) / 2;
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iResult = 0.0f;
    
    printf("Enter Number 1: \n");
    scanf(" %d", iValue1);

    printf("Enter Number 2: \n");
    scanf(" %d", iValue2);

    iResult = Average(iValue1, iValue2);
    printf("Average Value is : %f", &iResult);

    
}