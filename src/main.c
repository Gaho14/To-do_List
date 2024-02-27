#include "functions.h"

int main(int argc, char **argv)
{
    printf("Helo");
    cJSON* json = readJSON(argv[1]);
    printf("%s", cJSON_Print(json));

    return EXIT_SUCCESS;
}