///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user and
//                 convert capital to small and
//                 small to capital
// Input         : Q
// Output        : q
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch) {
  if (ch >= 65 && ch <= 90) {
    printf("%c", ch + 32);
  } else if (ch >= 97 && ch <= 122) {
    printf("%c", ch - 32);
  } else {
    printf("%c", ch);
  }
}

int main() {
  char cValue = '\0';

  printf("Enter the character");
  scanf("%c", &cValue);

  Display(cValue);

  return 0;
}