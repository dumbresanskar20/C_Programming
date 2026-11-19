///////////////////////////////////////////////////
//     Funtion name :    struprx
//     Description  :    accept string from user and convert it into upper case 
//     Input        :   "Marvellous Multi OS"
//     Output       :    "MARVELLOUS MULTI OS"
//                       
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    19/11/2026
// 
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>

void struprx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

int main ()
{
    char arr[20];
    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("modified string is %s",arr);
    return 0;
}
