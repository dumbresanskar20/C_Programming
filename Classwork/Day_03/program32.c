#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0;

    printf("Enter your Name : \n");
    scanf("%[^'\n']s", sName);                      //Enter remains in input buffer

    // fflush(stdin);                               //Used to solve the above input buffer error 

    printf("Enter your Age :\n");
    scanf("%d", &iAge);

    printf("Enter your Marks :\n");
    scanf("%f", &fMarks);

    printf("Welcome %s\n", sName);
    printf("Your Age is :%d\n", iAge);
    printf("Your Marks are :%f\n", fMarks);


    return EXIT_SUCCESS;
}