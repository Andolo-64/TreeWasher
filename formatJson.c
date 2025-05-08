#include <stdio.h>
#include "formatJson.h"
#include "ctype.h"
#include "string.h"

void ReformatJson(char *json) 
{
    // give formattedJson real value from pointer json
    char formattedJson[strlen(json)];
    strcpy(formattedJson, json);

    printf("%s", formattedJson);
    
    for (int i = 0; i < strlen(formattedJson); i++) 
    {
        // char string filter
        if (formattedJson[i] == ',') 
        {
        }
        // letter filter
        if (isalpha(formattedJson[i])) 
        {
        }
    }
    printf("\n");

    return;
}
