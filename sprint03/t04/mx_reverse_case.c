#include <stdio.h>
#include <stdbool.h>

bool mx_isupper(int s);
bool mx_islower(int s);
int mx_toupper(int s);
int mx_tolower(int s);


void mx_reverse_case(char *s){

    do {   
        if(mx_isupper(*s)) *s = mx_tolower(*s);
        else if(mx_islower(*s)) *s = mx_toupper(*s);
        s++;
    }
    while(*s != '\0');

}

// int main() {

//     char str[] = "HeLlo";
//     mx_reverse_case(str);
//     printf("%s", str);
// }


