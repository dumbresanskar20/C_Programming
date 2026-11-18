
///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =3  iCol =3
//     Output       :    5 4 3 2 1
//                       5 4 3 2 1
//                       5 4 3 2 1
//                       
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    18/11/2026
// 
////////////////////////////////////////////////
#include<stdio.h>


void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
  
      for(i = 1; i<= iRow;i++)
      {
        
           for (j = 5; j>0; j--)
             {
             
                printf(" %d\t",j);
              
              
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