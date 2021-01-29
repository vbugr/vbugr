#include <stdbool.h>
//#include <stdio.h>

int mx_count_words(const char *str, char delimiter) {
	int result = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		// skip all delimiters
		for (; str[i] == delimiter; i++);
		if (str[i] != '\0') result++;
		// skip to delimiters or end
		for (; str[i] != '\0' && str[i] != delimiter; i++); 
		//stop if end of line
		if (str[i] == '\0') break;
	}
	
	return result;
}

/*int main() {
	char str1[] = "___word1____word2___word3___w";
	char str2[] = "word";
	char str3[] = "w";
	char str4[] = "___w";
	char str5[] = "___word_";
	char str6[] = "___word_w";
	char str7[] = "word1_word2";
	char str8[] = "___";
	printf("%d\n", mx_count_words(str1, '_')); // 4
	printf("%d\n", mx_count_words(str2, '_')); // 1
	printf("%d\n", mx_count_words(str3, '_')); // 1
	printf("%d\n", mx_count_words(str4, '_')); // 1
	printf("%d\n", mx_count_words(str5, '_')); // 1
	printf("%d\n", mx_count_words(str6, '_')); // 2
	printf("%d\n", mx_count_words(str7, '_')); // 2
	printf("%d\n", mx_count_words(str8, '_')); // 0
}*/

