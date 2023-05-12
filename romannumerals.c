// leetcode prob: roman to integer

#include <stdio.h>
#include <string.h>

int romanValue(char c) {
  switch (c)
  {
    case ('I'):
      return 1;
      break;
    case ('V'):
      return 5;
      break;
    case ('X'):
      return 10;
      break;
    case ('L'):
      return 50;
      break;
    case ('C'):
      return 100;
      break;
    case ('D'):
      return 500;
      break;
    case ('M'):
      return 1000;
      break;
    default:
      return 0;
  };
};

int romanToInt(char * s){
  char prev = s[0];
  int sum = romanValue(s[0]);
  int i = 1;
  while (i < strlen(s)) {
    if ((s[i] == 'V' || s[i] == 'X') && prev == 'I') {
      sum += romanValue(s[i]) - 2;
    } else if ((s[i] == 'L' || s[i] == 'C') && prev == 'X') {
      sum += romanValue(s[i]) - 20;
    } else if ((s[i] == 'D' || s[i] == 'M') && prev == 'C') {
      sum += romanValue(s[i]) - 200;
    } else {
      sum += romanValue(s[i]);
    }
    prev = s[i];
    printf("%c", prev);

    i++;
  };


  return sum;
}


int main() {
    printf("%d\n", romanToInt("III"));
    printf("%d\n", romanToInt("LLL"));

    return 0;
}