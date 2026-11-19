

///////////////////////////////////////////////////
// Function name : strtoggleX
// Description   : Accept string from user and
//                 toggle the case of each character
// Input         : Marvellous Multi OS
// Output        : mARVELLOUS mULTI os
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
void strtoggleX(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strtoggleX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}