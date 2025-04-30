#include "stdio.h"
#include "formatJson.h"
#include "ctype.h"
int i;

void ReformatJson(char** json[])
{
  for (i = 0; i < sizeof(**json); i++) {
    printf("%lu", sizeof(**json));
  }

  return;
}
