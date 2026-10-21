/*
============================================================
            Operation ||
============================================================
| Result 1       |      Result 2       |     Final Result  |
============================================================
| TRUE           |     TRUE            |       TRUE        |      
| TRUE           |     FALSE           |       TRUE        |      
| FALSE          |     TRUE            |       TRUE        |      Short Circuit
| FALSE          |     FALSE           |       FALSE       |      Short Circuit
============================================================
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("Number is Divisile. \n");
    }
    else
    {
        printf("Number is not divisible. \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);    

    return EXIT_SUCCESS;
}