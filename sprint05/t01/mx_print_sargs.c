#include <stdlib.h>
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char **argv) {
    char *c;
    for (int i = 1; i< argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0){
            c = argv[i];
            argv[i] = argv [j];
            argv[j] = c;
        
        }
    }
 }
    for(int f = 1; f < argc; f++) {
        mx_printstr(argv[f]);
        mx_printchar('\n');
    }
}
