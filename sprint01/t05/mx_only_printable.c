#include <stdio.h>

void mx_printchar(char c);

void mx_only_printable(void) {
	char i = 126;
	while(i >= 32){
		mx_printchar(i);
 		i--;
}
}
//	int main() {
//
//	mx_only_printable();
//
//}

