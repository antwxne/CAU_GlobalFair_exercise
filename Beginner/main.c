#include <stdio.h>

int add(const int a, const int b);

int main(void)
{
    const int a = 1;
    const int b = 2;

    printf("%d + %d = %d\n", a, b, add(a, b));
    return 0;
}