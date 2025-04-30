#include <stdio.h>
#include "GetJson.h"
#include "formatJson.h"

int main()
{
    char json[] = "{\"name\":\"John\", \"age\":30,\"city\":\"New York\", \"isEmployed\":true}\n";

    printf("Hello world \n");

    GetJson();
    ReformatJson(&json);

    return(0);
}
