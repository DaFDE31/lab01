#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    return fileName;
}

char* mysteryExplode(const char* str){
    int len = strlen(str);
    char *exploded = (char*) malloc((len*(len+1)/2)+1);
    memset(exploded, '\0', (len*(len+1)/2+1));
    for (int x = 1; x <=len; x++){
        //strncat adds from second argument onto first by third arguments amount of characters
        strncat(exploded, str, x);
    }
    return exploded;
}