#include <stdio.h>
#include "formatJson.h"
#include "ctype.h"
#include "string.h"

void spaceAdder(int depth, int index, char *formattedJson)
{
    // Shift characters to the right to make room for the spaces
    for (int i = strlen(formattedJson); i >= index; i--) {
        formattedJson[i + depth] = formattedJson[i];
    }

    // Insert spaces at the specified index
    for (int i = 0; i < depth; i++) {
        formattedJson[index + i] = ' ';
    }
}

void reformatJson(char *jsonText) 
{
    int depth = 0;
    char formattedJson[strlen(jsonText)];
    formattedJson[0] = '\0'; // empty string char
    
    for (int i = 0; i < strlen(jsonText); i++) 
    {
        // char string filter
        if (jsonText[i] == '{') 
        {
            depth++;
        }
        else if (jsonText[i] == '}')
        {
            depth--;
        }
        
        // letter filter
        if (isalpha(jsonText[i])) 
        {
            formattedJson[i] = jsonText[i];
            spaceAdder(depth, i, formattedJson);
        }
    }
    printf("%s\n", formattedJson);

    return;
}
