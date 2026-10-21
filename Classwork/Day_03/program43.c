#include<stdio.h>
#include<stdlib.h>

int Min(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo2;

    }
    else
    {
        return iNo1;
    }
    return EXIT_SUCCESS;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;
    
    printf("Enter Number 1: \n");
    scanf(" %d", &iValue1);

    printf("Enter Number 2: \n");
    scanf(" %d", &iValue2);
    if(iValue1 == iValue2)
    {
        printf("Both numbers are same.");
    }
    else{
    iResult = Min(iValue1, iValue2);
    printf("Smallest Number is : %d",  iResult);
    }
}