///////////////////////////////////////////////////
// Function name : DisplaySchedule
// Description   : Accept division from user and
//                 display exam time according to division
// Input         : C
// Output        : Your exam at 9.20 AM
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv) {
  if (chDiv >= 97 && chDiv <= 122) {
    chDiv = chDiv - 32;
  }

  if (chDiv == 'A') {
    printf("Your exam at 7 AM");
  } else if (chDiv == 'B') {
    printf("Your exam at 8.30 AM");
  } else if (chDiv == 'C') {
    printf("Your exam at 9.20 AM");
  } else if (chDiv == 'D') {
    printf("Your exam at 10.30 AM");
  } else {
    printf("Invalid Division");
  }
}

int main() {
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter your division");
  scanf("%c", &cValue);

  DisplaySchedule(cValue);

  return 0;
}