#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
	char str[] = "Follow the white rabbit.\nKnock, knock, Neo.";
	int a = strlen(str);

	write(1, str, a);

}

//int main() {
//	mx_write_knock_knock();
//}

