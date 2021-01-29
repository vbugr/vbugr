#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow)
{
    if (pow == 0) return 1; //base case

    else
        return mx_pow_rec(n, pow - 1) * n; //main loop
        
}

// int main () {
//     printf("%f", mx_pow_rec(2, -2));
// }
