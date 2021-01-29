void mx_printchar(char c);

void mx_hexadecimal(void) {
	for (int i = 48; i < 71; i++) {
		if (i < 58 || i >64) {
		mx_printchar(i); 
		}
	}
	mx_printchar(10);
}

