#include "../inc/header.h"

char **mx_strsplit(char const *s, char delim) {
	int word_count = mx_count_words(s, delim);
	const char *str = s;
	char **result = (char **)malloc(word_count * sizeof(char *));	
	if (!result) {
		return NULL;
	}
	int i = 0;
	int j = 0;
	while (j < word_count && str) {
		if (*str == delim) {
			str++;
		} else {
			// k - count of bytes to copy from pointer and on
			for (i = 0; str[i] && str[i] != delim; i++);
			result[j] = mx_strncpy(mx_strnew(i), str, i);
			str += i;
			j++;
		}
	}
	result[j] = NULL;
	return result;
}

