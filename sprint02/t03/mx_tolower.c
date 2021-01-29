//#include <stdio.h>

int mx_tolower(int c) {
    char i;
     if(65<=c && c<=90) {
         i=c+32;
         return i;
     }
    else {
    return c;
    }
}

//int main() {
//printf("%c", mx_tolower('Z'));
//}
