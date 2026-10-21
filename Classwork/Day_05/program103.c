#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are : \n", iNo);

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}       


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);
    
    iRet = SumFactors(iValue);
    printf("Sum of factors of %d is %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}


//  Time complexity of this program is O(N / 2) where N is the input number.
