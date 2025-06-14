#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reformatJson(char *jsonText)
{
    char formattedJson[strlen(jsonText) + 1];
    strcpy(formattedJson, jsonText);

    printf("Original JSON: %s\n", formattedJson);

    char blacklist[] = ".,!?;:'\"()[]{}<>@#$%^&*_-+=~`";

    size_t len = strlen(formattedJson);
    size_t j = 0;

    for (size_t i = 0; i < len; i++) {
        int isBlacklisted = 0;
        for (size_t b = 0; b < strlen(blacklist); b++) {
            if (formattedJson[i] == blacklist[b]) {
                isBlacklisted = 1;
                break;
            }
        }

        if (!isBlacklisted) {
            formattedJson[j++] = formattedJson[i];
        }
    }

    formattedJson[j] = '\0';

    printf("Modified JSON: %s\n", formattedJson);
}
