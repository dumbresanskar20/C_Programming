

///////////////////////////////////////////////////
// Function name : DisplayDigit
// Description   : Accept string from user and
//                 display only digits from string
// Input         : Marv89ellous123
// Output        : 89123
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
void DisplayDigit(char *str)
{
    int i = 0, j = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';
}


int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    DisplayDigit(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}