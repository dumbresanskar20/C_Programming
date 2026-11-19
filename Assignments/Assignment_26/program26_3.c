///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user and
//                 display capital characters till Z
//                 or small characters in reverse till a
// Input         : Q
// Output        : Q R S T U V W X Y Z
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch) {
  char cCnt = '\0';

  if (ch >= 65 && ch <= 90) {
    for (cCnt = ch; cCnt <= 90; cCnt++) {
      printf("%c\t", cCnt);
    }
  } else if (ch >= 97 && ch <= 122) {
    for (cCnt = ch; cCnt >= 97; cCnt--) {
      printf("%c\t", cCnt);
    }
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