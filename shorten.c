#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

/*
Shortens the string s to new_len. If the original length of s is less than or equal to new_len, s is unchanged
*/

void shorten(char *s, int new_len) {
*(s+new_len) = '\0';
}