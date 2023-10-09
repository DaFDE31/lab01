#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    char* ret = (char*) malloc(100);

    FILE *fileptr = fopen(fileName, "r");

    fgets(ret, MAX_LINE_LEN, fileptr);

    fclose(fileptr);
    ret[strcspn(ret, "\n")] = '\0';
    return ret;
}

char* mysteryExplode(const char* str){
    int len = strlen(str);
    char* exploded = (char*) malloc((len * (len+1)/2)+1);
    memset(exploded, '\0', (len * (len+1)/2+1));
    for (int x = 1; x <=len; x++){
        //strncat adds from second argument onto first by third arguments amount of characters
        strncat(exploded, str, x);
    }
    return exploded;
}