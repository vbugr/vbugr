#include "hex_to_nbr.h"

unsigned long my_pow(unsigned long a, int pow) {
	unsigned long result = 1l;
	while (pow-- > 0) {
		result *= a;
	}
	return result;
}

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long result = 0l;
	int size = 0;
	for (size = 0; hex[size]; size++);
	if (size == 0) {
		return result;
	}
	unsigned long digit;
	for (int i = 0; i < hex[i]; i++) {		
		if (mx_isdigit(hex[i])) {
			digit = hex[i] - 48;
		} else if (mx_isalpha(hex[i])) {
			if (hex[i] >= 65 && hex[i] <= 70) {
				digit = hex[i] - 55;
			}
			else if (hex[i] >= 97 && hex[i] <= 122) {
				digit = hex[i] - 87;
			} else {
				return 0l;
			}
		}
		result += digit * my_pow(16, --size);
	}

	return result;
}

