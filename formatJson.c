#include <stdio.h>
#include <stdlib.h>
#include "formatJson.h"
#include "ctype.h"
#include "string.h"

static int size;

void spaceAdder(char *jsonText, int depth)
{
    size = sizeof(jsonText) + depth;

    // shift all elements of jsonText to the right
    for (size_t i = size; i > 0; i--)
    {
        jsonText[i + depth] = jsonText[i];
    }

    // add nummber of spaces
    for (size_t i = 0; i < depth; i++)
    {
        jsonText[i] = ' ';
    }

    jsonText[size + depth] = '\0';
}

void reformatJson(char *jsonText)
{
    size = strlen(jsonText);
    int depth = 0;
    char formattedJson[size];
    formattedJson[0] = '\0'; // empty char

    for (int i = 0; i < size; i++)
    {
        // Example usage
        char jsonText[100] = "{\"name\": \"John\"}";

        printf("Before adding spaces: %s\n", jsonText);
        spaceAdder(jsonText, 4); // Adds 4 spaces at the start

        printf("After adding spaces: %s\n", jsonText);
        // char string filter
        /* if (jsonText[i] == '{')
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
            spaceAdder(jsonText, depth);
        }
    }
    printf("%s\n", formattedJson);
    */

        return;
    }
}
