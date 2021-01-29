#include <stdlib.h>

char *mx_strnew (const int size) {
    if (size <= 0)
        return NULL;

   char *point = (char*)malloc(sizeof(char) * (size + 1));

        for(int i = 0; i <= size; i++) {
            point[i] = '\0';
        }
        return point;
    
    // point[0]....point[size] = '\0';
    //    if () {
    //        return NULL;
    //    }

    // free((void*)point);
    // point = NULL;

    // system("leaks -q a.out");
    // return point;
}

// int main(void) {
//     mx_strnew(10);
// }
