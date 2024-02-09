#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns the index of the first occurrence of n in the string h or -1 if it isn't found.
*/

int find(char *h, char *n) {
    int inde = -1;
    int i = 0;
    while(*h != '\0') {
        if(*h == n) {
            inde = i;
            break;
        }
        h++;
        i++;
    }
    return inde;
}