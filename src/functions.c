#include "functions.h"

cJSON readJSON(char* link){
    char *content;
    struct stat info;
    
    int header = open(link, O_RDONLY);
    if(header == -1){
        perror("open");
        exit(EXIT_FAILURE);
    }

    stat(link, &info);
    content = malloc(info.st_size*sizeof(char));

    char c;
    for(int i=0; i<info.st_size; i++){
        read(header, &c, 1);
        content[i] = c;
    }
    printf("%s",content);


    cJSON result;
    return result;
}