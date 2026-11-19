///////////////////////////////////////////////////
// Function name : ChkDigit
// Description   : Accept character from user and
//                 check whether it is digit or not
// Input         : 7
// Output        : TRUE
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch) {
  if (ch >= 48 && ch <= 57) {
    return TRUE;
  } else {
    return FALSE;
  }
}

int main() {
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character");
  scanf("%c", &cValue);

  bRet = ChkDigit(cValue);

  if (bRet == TRUE) {
    printf("It is Digit");
  } else {
    printf("It is not a Digit");
  }

  return 0;
}