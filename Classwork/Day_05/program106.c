#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
    return(iSum == iNo);
}       


int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a Perfect Number\n", iValue);
    }
    else
    {
        printf("%d is not a Perfect Number\n", iValue);
    }

    return EXIT_SUCCESS;
}


//  Time complexity of this program is O(N / 2) where N is the input number.
