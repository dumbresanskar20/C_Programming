///////////////////////////////////////////////////
// Function name : ChkVowel
// Description   : Accept string from user and
//                 check whether it contains vowels
//                 or not
// Input         : marvellous
// Output        : TRUE
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str) {
  if (str == NULL) {
    return FALSE;
  }

  while (*str != '\0') {
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' ||
        *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' ||
        *str == 'O' || *str == 'U') {
      return TRUE;
    }

    str++;
  }

  return FALSE;
}

int main() {
  char arr[20];
  BOOL bRet = FALSE;

  printf("Enter string");
  scanf("%19[^\n]", arr);

  bRet = ChkVowel(arr);

  if (bRet == TRUE) {
    printf("Contains Vowel");
  } else {
    printf("There is no Vowel");
  }

  return 0;
}