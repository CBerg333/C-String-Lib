#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a new string based on s, but without any duplicate characters. For example, if s is the string, "There's
always money in the banana stand.", the function returns the string "Ther's alwymonitbd.". It is up
to the caller to free the memory allocated by the function.
*/

char *dedup(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    s -= count;
    int count2 = 0;
    char *t = (char*)malloc(count);
    for(int i = 0; i < count; i++) {
        int j;
        for(j = 0; j < i; j++) {
            if(s[j] == s[i]) {
                break;
            }
        }
        if(j == i) {
            t[count2] = s[i];
            count2++;
        }
    }
    t[count2] = '\0';
    count2++;
    return &t[0];
    free(t);
}