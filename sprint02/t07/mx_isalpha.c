//#include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c) {

    if((65<=c && c<=90) || (97<=c && c<=122))
    {
        return 1;
    }
    
    else{
        return 0;
    }    
}

//int main() {
//    printf("%d", mx_isalpha('s'));
//}