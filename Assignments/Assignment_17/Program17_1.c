///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =3  iCol =4
//     Output       :    1 2 3 4
//                       5 6 7 8
//                       9 1 2 3
//                       4 5 6 7 
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    17/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    int iNo = 1;
  
      for(i = 1; i<=iRow ;i++)
      {
        
           for (j = 1; j<=iCol; j++)
             {
                if(iNo >9)
                {
                    iNo = 1;
                }
              
                printf("%d\t",iNo);
                iNo++;
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