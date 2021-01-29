#include <stdbool.h>

bool mx_isdigit(int c) {
	for (char ch = '0'; ch <= '9'; ch++) {
		if (c == ch) {
			return 1;
		}
	}
	
	return 0;		
}

//int main() {
//	for (int i = 0; i < 127; i++) {
//		printf("i = %d, isdigit:%d\n", i, mx_isdigit(i));
//	}
//}

