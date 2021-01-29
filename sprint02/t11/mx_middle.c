//#include <stdio.h>

int mx_mid(int a, int b, int c) {
	int mid=c;
	if((a>=b && a<=c) || (a<=b && a>=c)) mid=a;
	if((b>=a && b<=c) || (b<=a && b>=c)) mid=b;
	return mid;
}

//int main() {
//	
//	printf("%d", mx_mid(12, 12, 10));
//}