//#include <stdio.h>

int mx_tolower(int s) {
    char i;
     if(65<=s && s<=90) {
         i=s+32;
         return i;
     }
    else {
    return s;
    }
}

//int main() {
//printf("%c", mx_tolower('Z'));
//}
