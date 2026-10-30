// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Print pattern until entered number of times.
// Input         : Integer number
// Output        : $    *
// Author        : Sanskar Balasaheb Dumbre
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}