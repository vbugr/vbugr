#include <stdbool.h>
//#include <stdio.h>
bool mx_isspace(char c) {
    int i=c;
    if(i>=9 && i<=13) {
        return 1;
    }
    else if(i==32) {
        return 1;
    }
    else {
        return 0;
    }
}
