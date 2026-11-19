///////////////////////////////////////////////////
// Function name : chkChar
// Description   : Accept string from user and one character 
//                 check whether is present in string or not
// Input         : string - Kalyani ,character k 
// Output        : True
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar (char *str,char ch)
{
while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}


int main()
{
    char arr[20];
    char cValue;
    bool bRet = FALSE;


    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not  found");
    }

     return 0;
}