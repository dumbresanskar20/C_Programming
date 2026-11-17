
///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol =4
//     Output       :    * # # #
//                       * * # #
//                       * * * #
//                       * * * *
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
// 
////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    if(iRow != iCol)
    {
      printf("Invalid Input\n");
      return;
    }
      for(i = 1; i<= iRow;i++)
      {
        
           for (j = 1; j<=iCol; j++)
             {
              if(i == j)   // Digonal
              {
                 printf("%d\t",j);
              }
              else if (i<j)   
              {
                printf("%d\t",j);
              }
              else   
              {
                printf(" \t");
              }
              }
                
        printf("\n\n");
      }
      
    }
    

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}