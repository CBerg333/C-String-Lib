#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>
/*
Returns 1 if all of the characters in the string are either upper- or lower-case letters of the alphabet. It returns 0
otherwise.
*/

int all_letters(char *s) {

    while(*s >= 65 && *s <= 90 && *s != '\0') {
        s++;
        if((*s < 65 || *s > 90) && *s != '\0') {
             return 0;
         }
        }
    while(*s >= 97 && *s <= 122 && *s != '\0') {
         s++;
         if((*s < 97 || *s > 122) && *s != '\0') {
            return 0;
         }
        }
     return 1;
    }