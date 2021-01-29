#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	char* result = mx_strnew(33 * sizeof(char));
	result[0] = '0';
	result[1] = '\0';
	int size = 0;
    	for (int i = 0, temp = 0; nbr > 0; i++, nbr /= 16) {
		temp = nbr % 16;
		if (temp < 10) {
			result[i] = temp + 48;
		} else {
			result[i] = (temp - 10) + 97;
		}
		size++;
	}	
	char temp;
	int i;
	for (i = 0; i < size / 2; i++) {
		temp = result[i];
		result[i] = result[size - i - 1];
		result[size - i - 1] = temp;
	}
	if (size != 0) {
		result[i * 2] = '\0';
	}
	return result;
}

