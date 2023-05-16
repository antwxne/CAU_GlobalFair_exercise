#include <stdio.h>

int find_double(const int *arr, const size_t size);

void display_array(const int *arr, const size_t size)
{
    printf("Array: {");
    for (size_t i = 0; i < size; ++i) {
        printf(i + 1 != size ? "%d, " : "%d}\n", arr[i]);
    }
}

int main(void)
{
    const int arr[] = {3, 4, 9, 42, 1, 5, 3, 5, 1, 9, 4};
    size_t arr_size = sizeof arr / sizeof *arr;
    int result;

    display_array(arr, arr_size);
    result = find_double(arr, arr_size);
    printf("Result == %u\n", result);
    return 0;
}