
///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =3  iCol =3
//     Output       :    1 2 3
//                       1 2 3
//                       1 2 3
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
        
           for (j = 1; j<=iCol; j++)
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