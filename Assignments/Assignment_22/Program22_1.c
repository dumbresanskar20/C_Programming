///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number from user  display below patttern 
//     Input        :   5
//     Output       :    A B C D E
//                       
//     Author       :    Dumbre Sanskar Balasaheb
//     Date         :    18/11/2026
// 
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void Pattern(int i)
  {
    int iNo = 0;
    char ch = '\0';
      for(iNo = 1,ch = 'A'; iNo<= i;iNo++,ch++)
      {
        printf("%c\t",ch);
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
