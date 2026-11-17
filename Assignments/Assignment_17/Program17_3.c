///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =5  iCol =5
//     Output       :    a b c d e
//                       1 2 3 4 5
//                       a b c d e
//                       1 2 3 4 5
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    
  
      for(i = 1; i<=iRow ; i++)
      {
        
           for (j = 1; j<=iCol;j++)
             {
                if (i%2!=0)
                {
                    printf("%c\t",j+96);
                }
                else
                printf("%d\t",j);
                
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
