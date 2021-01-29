#include <stdlib.h>

void mx_strdel(char **str) {
    free((void*)*str);
    str = NULL;
}

// void checker() {
//     char *str1 = (char *)malloc(5); //right malloc
//     mx_strdel(&str1);
// }

// int main() {
//    // int str = 12;
//     checker();

//     system("leaks -q a.out");
    
//    // mx_strdel(&str1);
// }
