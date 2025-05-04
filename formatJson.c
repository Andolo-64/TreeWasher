#include <stdio.h>
#include "formatJson.h"
#include "ctype.h"
#include "string.h"

void ReformatJson(char *json) 
{
	int a = 0;
	for (int i = 0; i < strlen(json); i++) {
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
