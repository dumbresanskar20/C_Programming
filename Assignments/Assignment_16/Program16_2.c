

///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below pattern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    A B C D
//                       a b c d
//                       A B C D
//                       a b c d
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    char ch = '\0';
      for(i = 1; i<= iRow;i++)
      { 
       
        
           for (j = 1,ch = 'A'; j<=iCol; j++,ch++)
             {
               if (i%2== 0)
              {
                ch = 'a';
              }
              printf("%c\t",ch);
              }
                
        printf("\n\n");
      }
      
    }
       
int main()
{
 int iValue1= 0,iValue2;
 printf("Enter Number of Rows and column : \n");
 scanf("%d %d",&iValue1,&iValue2);
 Pattern(iValue1,iValue2);
  return EXIT_SUCCESS;
}