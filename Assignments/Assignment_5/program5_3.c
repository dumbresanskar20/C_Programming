// ////////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Description   : Displays the greatest number from 3
// Input         : An integer number
// Output        : Which number is Greater
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade: A");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade: B");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade: C");
    }
    else if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade: D");
    }
    else if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade: Fail");
    }
    else
    {
        printf("Invalid Marks.");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}