///////////////////////////////////////////////////
// Function name : LastChar
// Description   : Accept string  and character from user 
//                 and return index of first occurance of that character
// Input         : string- kalyani , character - a
// Output        : 1
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iLast = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iCount;
        }

        str++;
        iCount++;
    }

    return iLast;
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

    iRet = LastChar(arr,cValue);
    
    printf("character location is : %d",iRet);



    return EXIT_SUCCESS;
}
