

///////////////////////////////////////////////////
// Function name : countWhite
// Description   : Accept string from user and
//                 display the count of whitespaces
// Input         : Marvellous Multi
// Output        : 1
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int countWhite(char *str)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str == ' ')
    {
    iCount++;
   }
     str++;
    
}
   return iCount;
}


int main ()
{
    int iRet = 0;
    char Arr[100]= {'\0'};
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    iRet = countWhite(Arr);
    printf("%d",iRet);



    return EXIT_SUCCESS;
}
