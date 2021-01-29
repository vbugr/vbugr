//#include <stdio.h>

int mx_tolower(int c) {
    char i;
     if(97<=c && c<=122) {
         i=c-32;
         return i;
     }
    else {
    return c;
    }
}

//int main() {
//printf("%c", mx_tolower('z'));
//}
