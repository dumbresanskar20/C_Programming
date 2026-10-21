#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;
    printf("Enter No. : \n");
    scanf("%d\n", &ivalue);

    if( (ivalue % 2) == 0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }

    return EXIT_SUCCESS;
}