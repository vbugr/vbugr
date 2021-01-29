#include <stdlib.h>

char *mx_strnew (const int size) {
    if (size <= 0) //conditional
        return NULL;

   char *point = (char*)malloc(sizeof(char) * (size + 1)); // give memory

        for(int i = 0; i <= size; i++) { //cycle
            point[i] = '\0'; //fill \0
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
