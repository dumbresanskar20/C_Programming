///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user and
//                 display its ASCII value in decimal,
//                 octal and hexadecimal format
// Input         : A
// Output        : Decimal      65
//                 Octal        0101
//                 Hexadecimal  0X41
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch) {
  printf("Decimal\t\t%d\n", (unsigned char)ch);
  printf("Octal\t\t0%o\n", (unsigned char)ch);
  printf("Hexadecimal\t0X%X\n", (unsigned char)ch);
}

int main() {
  char cValue = '\0';

  printf("Enter the character");
  scanf("%c", &cValue);

  Display(cValue);

  return 0;
}