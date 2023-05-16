#include "stdio.h"

char *invert_str(char *str);

int main(void)
{
    char str[] = "ABCDE";

    printf("Given string == %s\n", str);
    printf("Reversed string == %s\n", invert_str(str));
    return 0;
}