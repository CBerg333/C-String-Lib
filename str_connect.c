#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Returns a string consisting of the first n strings in strs with the character c used as a separator. For example, if
strs contains the strings {"Washington", "Adams", "Jefferson"} and c is '+', the function returns the
string "Washington+Adams+Jefferson"
*/

char *str_connect(char **strs, int n, char c) {
    int count = 0;
    int j = 0;
    char *t = (char*) malloc(1000);
    for(int i = 0; i < n; i++) {
        while(strs[i][j] != '\0') {
            count++;
            *t = strs[i][j];
            t++;
            j++;
        } 
        if(i != n-1) {
        *t = c;
        t++;
        count++;
        }
        j = 0;
    }
    *t = '\0';
    count++;
    t++;
    t -= count;
    return t;
    free(t);
}