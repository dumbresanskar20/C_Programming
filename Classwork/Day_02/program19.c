#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if( (iNo % 2) == 0){
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int ivalue = 0;
    bool bRet = false;

    printf("Enter No. : \n");
    scanf("%d\n", &ivalue);

    bRet = CheckEven(ivalue);
    
    if(bRet == true)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is odd\n");
    }
    
    return EXIT_SUCCESS;

}
