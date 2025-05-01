#include <stdio.h>
#include "getJson.h"
#include "formatJson.h"

int main()
{
    char jsonLocation[] = "Git/TreeWasher/test.json"; 
    long length;

    getJsonFileLength(jsonLocation, &length);
    char jsonText[length + 1];

    getJsonText(jsonLocation,jsonText, &length);
    printf("%s", jsonText);
    ReformatJson();

    return(0);
}
