//#include <stdio.h>
#include <string.h>
 
int mx_strlen(const char *s) {
	int i=0;
        while (s[i] != '\0') {
		i++;
        }
        
	return i;
}

//        int main(void) {
//        printf("%d", mx_strlen(""));
//}

