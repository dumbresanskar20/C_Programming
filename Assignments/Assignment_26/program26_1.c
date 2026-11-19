///////////////////////////////////////////////////
// Function name : DisplayASCII
// Description   : Display ASCII table containing
//                 symbol, decimal, hexadecimal and
//                 octal values from 0 to 255
// Input         : None
// Output        : ASCII table from 0 to 255
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII() {
  int iCnt = 0;

  printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

  for (iCnt = 0; iCnt <= 255; iCnt++) {
    printf("%c\t%d\t%X\t\t%o\n", (unsigned char)iCnt, iCnt, iCnt, iCnt);
  }
}

int main() {
  DisplayASCII();

  return 0;
}