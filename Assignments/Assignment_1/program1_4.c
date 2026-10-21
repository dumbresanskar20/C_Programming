// ////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : Checks whether an integer is divisible by 5.
// Input         : An integer
// Output        : Whether the integer is divisible by 5
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

int Check( int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter Number \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}