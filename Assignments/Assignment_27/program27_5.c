///////////////////////////////////////////////////
// Function name : Reverse
// Description   : Accept string from user and
//                 display it in reverse order
// Input         : MarvellouS
// Output        : SuollevraM
// Author        : Dumbre Sanskar Balasaheb
// Date          : 19/11/2026
///////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char *str) {
  char *start = str;
  char *end = str;
  char temp = '\0';

  if (str == NULL) {
    return;
  }

  while (*end != '\0') {
    end++;
  }

  if (end == str) {
    return;
  }

  end--;

  while (start < end) {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

  printf("%s", str);
}

int main() {
  char arr[20];
  int iRet = 0;

  printf("Enter string");
  scanf("%19[^\n]", arr);

  Reverse(arr);

  return 0;
}