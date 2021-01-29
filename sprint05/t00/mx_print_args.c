#include <stdlib.h>

void mx_printint(int n);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main (int argc, char **argv) {
    mx_printint(argc);
    mx_printchar('\n');
    for (int i = 1; argv[i] != NULL; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
