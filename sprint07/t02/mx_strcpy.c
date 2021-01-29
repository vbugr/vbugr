#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {

    char *ret = dst;

    do {
        *dst = *src;
        dst++;
        src++;
    }
    while(*src != '\0');
    return ret;
}

// int main(void) {
//     char str1[20] = "C programming";
//     char str2[20];

//     printf("%s", mx_strcpy(str2, str1));
// }
