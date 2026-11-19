///////////////////////////////////////////////////
// Function name : countChar
// Description   : Accept string  and character from user 
//                 display the count of that character 
// Input         : string - kalyani , character - a
// Output        : 2
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int countChar(char *str,char ch)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str == ch)
    {
    iCount++;
   }
     str++;
    
}
   return iCount;
}


int main ()
{
   
    char arr[20];
    char cValue;
    int iRet = 0;


    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    iRet = countChar(arr,cValue);
    
    printf("character frequence is : %d",iRet);



    return EXIT_SUCCESS;
}
