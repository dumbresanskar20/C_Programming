///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    4 4 4 4
//                       3 3 3 3
//                       2 2 2 2 
//                       1 1 1 1
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
  
      for(i = iRow; i>0 ;i--)
      {
        
           for (j = 1; j<=iCol; j++)
             {
              
                printf("%d\t",i);
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