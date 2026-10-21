/*
============================================================
            Operation &&
============================================================
| Result 1       |      Result 2       |     Final Result  |
============================================================
| TRUE           |     TRUE            |       TRUE        |
| TRUE           |     FALSE           |       FALSE       |
| FALSE          |     TRUE            |       FALSE       |
| FALSE          |     FALSE           |       FALSE       |
============================================================
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Number is Divisile by both 3 & 5. \n");
    }
    else
    {
        printf("Number is not divisible by both 3 & 5. \n");
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