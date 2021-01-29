#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL) {
        return NULL;
    }
      else{
        
        int *arr = malloc(sizeof(int)*size);
        for (int i = 0; i < size; i++) {
            arr[i] = src[i];        
    }
    return arr;}
}

// int main() {
//     int src[] = {2, 2, 3};
//     printf("%d", *mx_copy_int_arr(src, 3));
// }
