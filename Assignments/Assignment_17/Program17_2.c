///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol =4
//     Output       :    2 4 6 8
//                       1 3 5 7
//                       2 4 6 8
//                       1 3 5 7
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
// 
////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 != 0)
            {
          
                printf("%d\t", 2 * j);
            }
            else
            {
            
                printf("%d\t", 2 * j - 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column:\n");
    scanf("%d %d", &iValue1,&iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}