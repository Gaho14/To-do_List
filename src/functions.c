#include "functions.h"

cJSON* readJSON(char* link){
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
    if(close(header)<0){
        perror("cl");
        exit(EXIT_FAILURE);
    }

    cJSON *result;
    result = cJSON_Parse(content);
    return result;
}

void writeJSON(char* link, cJSON* json_w){

    // write the JSON string to the file 
    FILE* header = fopen(link, "w"); 
    if (header == NULL) { 
        perror("cl"); 
        exit(EXIT_FAILURE); 
    }  
    fputs(cJSON_Print(json_w), header); 
    if(fclose(header)!=0){
        perror("cl");
        exit(EXIT_FAILURE);
    }
}