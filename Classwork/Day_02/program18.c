#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if( (iNo % 2) == 0){
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

}

int main()
{
    int ivalue = 0;
    printf("Enter No. : \n");
    scanf("%d\n", &ivalue);

    CheckEven(ivalue);
    
    return EXIT_SUCCESS;

}