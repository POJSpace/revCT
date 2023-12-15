/*
Please note that is code was written with mistakes on purpose, and should not be used as a good example.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int code = 1839;
char buff [32];

int compute(char* text) {
  int acc = 1;
  // Intentional for assembly
  long length = strlen(text);
  for (int i = 0; i < length; ++i) {
    acc += text[i];
  }
  return acc;
}

int main(int argc, char** argv) {
  char* pass;
  if (argc == 2) {
    pass = argv[1];  
  } else {
    printf("Enter secret key: ");
    gets(buff); 
    pass = buff;
  }
  
  if (compute(pass) == code) {
    printf("ACCESS GRANTED");
  } else {
    printf("ACCESS DENIED");
  }
  
  return 0;
}
