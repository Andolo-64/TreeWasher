#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getJson.h"

void getJsonText(char *jsonLocation, char jsonText[], long *length)
{
    FILE *jsonFile = fopen(jsonLocation, "rb");
    if (jsonFile == NULL) 
    {
        perror("File open failed \n");
        return;
    }
    else 
    {
        printf("File opend \n");
    }
    char jsonContent[*length + 1];

    size_t JsonText = fread(jsonContent, 1, *length, jsonFile);
    jsonContent[JsonText] = '\0';
    fclose(jsonFile);
    strcpy(jsonText, jsonContent);
         return;
}

void getJsonFileLength( char *jsonLocation, long *length )
{
    FILE *jsonFile;
    jsonFile = fopen(jsonLocation, "rb");
    if (jsonFile == NULL) 
    {
        perror("File open failed \n");
        return ;
    }
    else 
    {
        printf("File opend \n");
        
    }
    fseek(jsonFile, 0, SEEK_END);
    *length = ftell(jsonFile);
    rewind(jsonFile);
    fclose(jsonFile);
return;
}
