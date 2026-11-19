///////////////////////////////////////////////////
// Function name : CountCapital
// Description   : Accept string from user and
//                 count number of capital characters
// Input         : Marvellous Multi OS
// Output        : 4
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str) {
  int iCnt = 0;

  if (str == NULL) {
    return 0;
  }

  while (*str != '\0') {
    if (*str >= 'A' && *str <= 'Z') {
      iCnt++;
    }

    str++;
  }

  return iCnt;
}

int main() {
  char arr[20];
  int iRet = 0;

  printf("Enter string");
  scanf("%19[^\n]", arr);

  iRet = CountCapital(arr);

  printf("%d", iRet);

  return 0;
}