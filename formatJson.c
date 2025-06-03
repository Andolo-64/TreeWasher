#include <stdio.h>
#include <stdlib.h>
#include "formatJson.h"
#include "ctype.h"
#include "string.h"

static int size;

/*void spaceAdder(char *jsonText, int depth)
{
    // update size
    size = sizeof(jsonText + depth + 1);

    printf("%s \n before shift: \n", jsonText);

    // shift all elements of jsonText to the right
    for (int i = strlen(jsonText); i >= 0; i--)
    {
        jsonText[i] = jsonText[i - 1];
    }
    jsonText[0] = ' ';

    printf("%s \n after shift: \n", jsonText);


    // add nummber of spaces == depth jsonText[i] = ' ';
}*/

void reformatJson(char *jsonText)
{
    char formattedJson[strlen(jsonText) + 1];
    size_t j = 0;

    printf("Original JSON: %s\n", jsonText);

    for (size_t i = 0; i < strlen(jsonText); i++)
    {
        if (jsonText[i] == ' ') {
            if (j > 0 && formattedJson[j - 1] != ' ') {
                formattedJson[j++] = ' ';
            }
        } else if ((jsonText[i] >= 'a' && jsonText[i] <= 'z') ||
                   (jsonText[i] >= 'A' && jsonText[i] <= 'Z') ||
                   (jsonText[i] >= '0' && jsonText[i] <= '9')) {
            formattedJson[j++] = jsonText[i];
        }
    }

    formattedJson[j] = '\0';

    printf("Formatted JSON: %s\n", formattedJson);

    // update size
    // set depth 0
    // make formattedJson[size];
    // filter for { == depth++, } == depth--
    // isalpha
    // spaceadder and print
}