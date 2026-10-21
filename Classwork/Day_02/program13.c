// define 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name       : Addition
//  Input               : Integer, Integer
//  Output              : Integer
//  Description         : Perform Addition
//  Date                : 04/10/2026
//  Author              : Sanskar Balasaheb Dumbre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,   //First Variable
                int iNo2    //Second Vaiable
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;                //Business Logic

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    printf("Enter First Number: \n");
    if (scanf("%d", &ivalue1) != 1) 
    {
        fprintf(stderr, " Unable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number: \n");
    if(scanf("%d", &ivalue2) != 1)
    {
        fprintf(stderr, " Unable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }

    iresult = Addition( ivalue1, ivalue2);  

    printf("Addition is: %d\n", iresult);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Step 5 : Test the program
//  
//
//      Tested Test Cases
//
//  --------------------------------------------------
//     Input 1      Input 2          Output
//  --------------------------------------------------
//        10           11               21
//        11           0                11
//        0            11               11
//        20           -9               11
//        -9           20               11
//        -20          -11              -31
//  --------------------------------------------------
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







// gcc program9.c -o Myexe
// Myexe.exe