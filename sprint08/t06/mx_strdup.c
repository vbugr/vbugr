#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char* s);
char *mx_strcpy(char* des, const char* src);
		
char *mx_strdup(const char *str) {
	return mx_strcpy(mx_strnew(mx_strlen(str)), str);
}

/*#include <stdio.h>
int main() {
	char *str1 = "Hello, World!";
	char *my_str = mx_strdup(str1);
	printf("%s", my_str);
}*/

