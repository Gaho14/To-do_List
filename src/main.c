#include "functions.h"

int main(int argc, char **argv)
{
    cJSON* json = readJSON(argv[1]);
    writeJSON(argv[2], json);

    return EXIT_SUCCESS;
}