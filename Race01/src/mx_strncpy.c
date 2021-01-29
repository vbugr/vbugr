#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len) {
	int i = 0;
	for(i = 0; i < len && src[i] != '\0'; i++)
		dst[i] = src[i];
	for(; i < len; i++)
		dst[i] = '\0';
	return dst;
}

/*int main() {
	char str1[] = "hello";
	char str2[] = "world";
	
	printf("%s %s\n", str1, str2); // should output "hello world"
	mx_strncpy(str1, str2, 5); 
	printf("%s %s\n", str1, str2); // should output "world world"

	printf("\n");
	char str3[] = "hello";
	char str4[] = "world";
	printf("%s %s\n", str3, str4); // should output "hello world"
	mx_strncpy(str3, str4, 1); 
	printf("%s %s\n", str3, str4); // should output "wello world"

	printf("\n");
	char str5[] = "hello";
	char str6[] = "world";
	printf("%s %s\n", str5, str6); // should output "hello world"
	mx_strncpy(str5, str6, 10);
	printf("%s %s\n", str5, str6); // should output "world 
       					//(should be "world" for len < 7)
}*/

