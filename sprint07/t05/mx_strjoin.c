#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew (const int size);
char *mx_strcpy(char *dst, const char *src);

// 0000 0000 // char 

// 00000000   00000000   00000000   00000000 // int
// 00000000   00000000   00000000   00000000 // long int 
// 00000000   00000000   00000000   00000000   00000000   00000000   00000000   00000000 // long long int 

// long = int 

// 256

// 0...255

char *mx_strjoin(char const *s1, char const *s2) {
    int sumlen = mx_strlen(s1) + mx_strlen(s2);  
    
    if (s1 != NULL && s2 == NULL) {
        return mx_strdup(s1); 
    }
    if (s1 == NULL && s2 != NULL) {
        return mx_strdup(s2); 
    }
    if (s1 != NULL && s2 != NULL) {  // char * 
        char *s11 = mx_strnew(sumlen); // error
        mx_strcpy(s11, s1);
        mx_strcat(s11, s2);
        return s11;
    }
    return NULL;
}

// int main () {
//     char *s1 ="Hello";
//     char *s2 = "wrld";
//     printf("%s", mx_strjoin(s1, s2));
// }
