#include <stdio.h>

int code = 1839;
char buff [32];

int compute(char* text) {
  int acc = 1;
  while (*text != 0) {
    acc += *text;
    ++text;
  }
  return acc;
}

int main() {
  printf("Enter secret key: ");
  gets(buff);
  if (compute(buff) == code) {
    printf("ACCESS GRANTED");
  } else {
    printf("ACCESS DENIED");
  }
  return 0;
}
