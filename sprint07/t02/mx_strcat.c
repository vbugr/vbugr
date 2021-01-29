#include <stdio.h>
int mx_strlen(const char *s);
//char *s;
char *mx_strcat(char *s1, const char *s2) {
    int x = mx_strlen(s1);
    for (;*s2 !='\0'; x++) {
    s1[x] = *s2;
    s2++; 
    }
    s1[x+1] = '\0';
    return s1;
}

// int main () {
//     char q1[30] = "qwe";
//     char q2[]= "rty";
//     mx_strcat(q1, q2);
//     printf ("%s\n", q1);
// }
