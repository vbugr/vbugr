#include "printerr.h"

void mx_printerr(const char *s){
    char str = mx_strlen(s);
    write(2, s, str);
}
