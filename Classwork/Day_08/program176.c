#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;

    }
    if(iRev == iNo)                   //Issue
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }

    return EXIT_SUCCESS;
}