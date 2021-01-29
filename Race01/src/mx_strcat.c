//#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
	int i = 0, j = 0;
	for (i = 0, j = mx_strlen(s1); i < mx_strlen(s2); i++) {
		s1[j + i] = s2[i];
	}
	s1[j + i] = '\0';

	return s1;
}

/*int main() {
	char str1[] = "Hello";
	char str2[] = "World"		
	printf("%s\n", mx_strcat(str1, str2)); // should output "HelloWorld"
	printf("%s\n", str1);		// should ouput "HelloWorld"
	printf("%s\n", str2);		// should output something weird, since
					// as man strcat says, the "The behavior is
					// undefined if the destination array
					//  is not large enough for the contents of
					//  both src and dest and
					//  the terminating null character."
	char str3[] = "";
	char str4[] = "SacrificeFirst";
	
	printf("%s\n", mx_strcat(str3, str4)); // should output "SacrificeFirst"
	printf("%s\n", str3);			// should ouput "SacrificeFirst"
	printf("%s\n", str4);			// same thing as in the first test
}*/

