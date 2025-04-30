#include "formatJson.h"
#include "ctype.h"
#include "stdio.h"
#include "string.h"
int i;
int a;

void ReformatJson(char *json) {
  for (i = 0; i < strlen(json); i++) {
    if (json[i] == ':') {
      a++;
      printf("%d\n", a);
    }
    if (isalpha(json[i])) {
    }
  }
  printf("\n");

  return;
}
