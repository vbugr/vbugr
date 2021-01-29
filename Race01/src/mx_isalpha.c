#include "../inc/header.h"

bool mx_isalpha(int c) {
	for (int i = 65; i <= 90; i++) {
		if (c == i) {
			return 1;
		}
	}

	for (int i = 97; i <= 122; i++) {
		if (c == i) {
			return 1;
		}
	}

	return 0;
}

