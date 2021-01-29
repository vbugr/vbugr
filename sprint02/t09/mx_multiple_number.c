//#include <stdio.h>
#include <stdbool.h>

bool mx_multiple_number(int n, int mult)
{
    if(n*n==mult) 
    {
        return 1;
    }
    else {
        return 0;
    }
}

//int main() {
//    printf("%d", mx_multiple_number(3, 10));
//}
