#include <stddef.h>

int find_double(const int *arr, const size_t size)
{
    int result = 0;

    for (size_t i = 0; i < size; ++i) {
        result ^= arr[i];
    }
    return result;
}