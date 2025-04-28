#include "stdio.h"
#include "formatJson.h"

void ReformatJson()
{
    char json[] = "{\"name\":\"John\", \"age\":30,\"city\":\"New York\", \"isEmployed\":true}\n";
    printf("%s", json);

    return;
}
