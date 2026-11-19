///////////////////////////////////////////////////
// Function name : Difference
// Description   : Accept string from user and
//                 return difference between number
//                 of small and capital characters
// Input         : Marvellous
// Output        : 6
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str) {
  int iCnt = 0;
  int iSmall = 0;
  int iCapital = 0;

  if (str == NULL) {
    return 0;
  }

  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      iSmall++;
    } else if (*str >= 'A' && *str <= 'Z') {
      iCapital++;
    }

    str++;
  }

  iCnt = iSmall - iCapital;

  return iCnt;
}

int main() {
  char arr[20];
  int iRet = 0;

  printf("Enter string");
  scanf("%19[^\n]", arr);

  iRet = Difference(arr);

  printf("%d", iRet);

  return 0;
}