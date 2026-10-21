// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : Displays the wether person Eligible or not for Voting.
// Input         : An Age.
// Output        : Eligible or not.
// Author        : Sanskar balasaheb dumbre
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if((iAge < 18) && (iAge >= 0))
    {
        printf("Not Eligible for Voting.");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting.");
    }
    else
    {
        printf("Invalid Age.");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your Age :");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}