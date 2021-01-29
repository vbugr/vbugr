#include <stdio.h>

int mx_factorial_rec(int n)
{
    if (n < 0 || n>=13) //error check
    return 0;

    if (n == 0 || n == 1) return 1; //base case

    else
        return mx_factorial_rec(n - 1) * n; //main loop
        
}

// int main () {
//     printf("%d", mx_factorial_rec(-2));
// }
