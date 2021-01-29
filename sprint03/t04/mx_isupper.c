#include <stdbool.h>
bool mx_isupper(char s) {
if(s>=65 && s<=90) return 1;
else return 0;
}

// int main() {
//     printf("%d", mx_isupper('A'));
// }