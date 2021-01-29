#include <stdbool.h>
//#include <stdio.h>

bool mx_isdigit(int c) {

    if(c>=0 && c<=9) {
        return 1;
    }
    else {
        return 0;
    }
}

//int main () {
 //   printf("%d", mx_isdigit(10));
//}
