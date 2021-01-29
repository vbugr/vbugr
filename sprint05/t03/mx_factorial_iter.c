#include <stdio.h>

int mx_factorial_iter(int n) {
    int fac;
    int counter = 1; 
    if (n > 0 && n < 13){
    for(fac = 1; counter <= n; counter++) {
        fac = fac * counter;
        
    }
    return fac;
}
else return 0;
}
// int main () {
//     printf("%d", mx_factorial_iter(-5));
// }
