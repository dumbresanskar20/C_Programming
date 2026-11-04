// ////////////////////////////////////////////////////////////////
//
// Function Name : Main
// Description   : Display String
// Input         : Accept Name
// Output        : Print Name.
// Author        : Sanskar Balasaheb Dumbre
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter Full Name: ");
    scanf("%[^\n]", &Name);

    printf("Your Name is %s.\n", Name);


    return 0;
}