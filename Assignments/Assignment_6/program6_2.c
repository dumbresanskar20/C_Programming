// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Description   : Checks Student eligible or not for the admission.
// Input         : Marks and Age
// Output        : Eligible/Not Eligible
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks >= 60) && (fMarks <= 100))
    {
        if(iAge >= 17)
        {
            printf("Eligible for Admission.");
        }
        else
        {
            printf("Not Eligible for Admission.");
        }
    }
    else
    {
        if(((fMarks < 0) || (fMarks > 100)) || (iAge < 0))
        {
            printf("Invalid Input");
        }
        else
        {
            printf("Not Eligible for Edmission.");
        }
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and Age :");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}