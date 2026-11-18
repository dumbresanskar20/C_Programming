///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number from user  display below patttern 
//     Input        :   5
//     Output       :    5 # 4 # 3 # 2 # 1 #
//                       
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    18/11/2026
// 
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>


void Pattern(int i)
  {
    int iNo = 0;
    
      for(iNo = 5; iNo>0;iNo--)
      {
        
        
          printf("%d\t",iNo );
          printf("#\t");
        
        
      }
                
        printf("\n\n");
      }
      
    
    
int main()
{
 int iValue= 0;
 printf("Enter Number  : \n");
 scanf("%d",&iValue);
 Pattern(iValue);
  return EXIT_SUCCESS;
}
