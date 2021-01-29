#include "get_address.h"

char *mx_get_address(void *p) {
	unsigned long address = (unsigned long)p;
	char* hex_raw = mx_nbr_to_hex(address);
	char *result = mx_strnew(mx_strlen(hex_raw) + 2);
	result[0] = '0';
	result[1] = 'x';
	mx_strcpy(&result[2], hex_raw);
	free(hex_raw);
	return result;
}

