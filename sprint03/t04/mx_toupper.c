//#include <stdio.h>

int mx_toupper(int s) {
    char i;
     if(97<=s && s<=122) {
         i=s-32;
         return i;
     }
    else {
    return s;
    }
}

//int main() {
//printf("%c", mx_tolower('z'));
//}
