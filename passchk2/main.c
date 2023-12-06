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
  gets(buff);
  printf("%d", compute(buff));
  return 0;
}
