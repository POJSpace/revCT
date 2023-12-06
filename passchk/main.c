#include <stdio.h>
#include <string.h>

char buffer [32];
char* password = "1zu4h4ck3r?";

int main() {
  printf("Enter password: ");
  gets(buffer);
  if (strcmp(buffer, password) == 0) {
    printf("Access granted!");
  } else {
    printf("Access denied!");
  }
}
