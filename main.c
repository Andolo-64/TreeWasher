#include <stdio.h>
#include "formatJson.h"
#include "getJson.h"

int main(int argc, char *argv[]) 
{
    if (argc < 2) 
    {
        printf("argument not valid.\n");
        return(1);
    }

    char **jsonLocation = argv;
    long length;

    getJsonFileLength(jsonLocation, &length);

    if(length < 1)
    {
        printf("file missing or is empty");
        return (1);
    }

    char jsonText[length + 1];

    getJsonText(jsonLocation, jsonText, &length);
    printf("%s", jsonText);
    ReformatJson(jsonText);

    return (0);
}
