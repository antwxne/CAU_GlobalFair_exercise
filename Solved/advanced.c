#include <string.h>

char *invert_str(char *str) 
{
    const size_t len = strlen(str) - 1;
    char c;

    for (size_t i = 0; i <= len / 2 ; ++i) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
    }
    return str;
}