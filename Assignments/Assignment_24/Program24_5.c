///////////////////////////////////////////////////
// Function name : StrRevx
// Description   : Accept string  and reverse the 
//                 string
// Input         : string- kalyani 
// Output        : inaylak
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>
void StrRevx(char *str)

{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%s[^\n]", arr);

    StrRevx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}