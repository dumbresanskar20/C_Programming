// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
// Description   : Check wether the triangle is valid or invalid
// Input         : 3 Sides of the triangle.
// Output        : Valid / Invalid
// Author        : Sanskar balasaheb dumbre
// Date          : 22/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    int iSum = 0;
    iSum = iSide1 + iSide2;
    if((iSide1 >= 0) && (iSide2 >= 0) && (iSide3 >= 0))
    {
        if(iSum > iSide3)
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Triangle");
        }
    }
    else
    {
        printf("All Sides of Triangle must be positive.");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three sides of Triangle: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}