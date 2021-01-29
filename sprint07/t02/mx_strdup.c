#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strnew (const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
// char *size;
// char *src;
char *istr = mx_strnew(mx_strlen(str));

    
    mx_strcpy(istr, str);
    return istr;
}

// int main() {
//     // char *str;
//     // *str = 12;
//     printf("%s", mx_strdup("Hello"));
// }
