#include <stdio.h>
#include "formatJson.h"
#include "getJson.h"

int main() 
{
    char jsonLocation[] = "test.json";
    long length;

    getJsonFileLength(jsonLocation, &length);
    char jsonText[length + 1];

    getJsonText(jsonLocation, jsonText, &length);
    printf("%s", jsonText);
    ReformatJson(jsonText);

    return (0);
}
