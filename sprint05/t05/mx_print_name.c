#include <stdlib.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main (int argc, char **argv) {
    if (argc >= 1)
    while (mx_strchr(argv[0], '/') != NULL) {
            argv[0] = mx_strchr(argv[0], '/')+1;
    }
    mx_printstr(argv[0]);
    mx_printchar('\n');
}
