#include<stdio.h>
#include<stdlib.h>

int Max(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;

    }
    else
    {
        return iNo2;
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
        printf("Same");
    }
    else{
    iResult = Max(iValue1, iValue2);
    printf("Highest Number is : %d",  iResult);
    }
}