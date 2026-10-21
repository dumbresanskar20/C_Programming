#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;
    fAns = (float)(iNo1 + iNo2 + iNo3) / 3;
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;
    
    printf("Enter Number 1: \n");
    scanf(" %d", &iValue1);

    printf("Enter Number 2: \n");
    scanf(" %d", &iValue2);

    printf("Enter Number 3: \n");
    scanf(" %d", &iValue3);

    fResult = Average(iValue1, iValue2, iValue3);
    printf("Average Value is : %f", &fResult);

    return EXIT_SUCCESS;

    
}