//#include <stdio.h>

int mx_max(int a, int b, int c) {
    int max=a;
    if(b>max) max = b;
    if(c>max) max = c;
    return max;
}
    /*if(a<=b && b<=c)
    {
    
        return c;
    }
    if(b<=c && c<=a)
    {
        return a;
    }
    if (c<=a && a<=b)
    {
        return b;
    }
}*/

/* int main() {
    printf("%d", mx_max(-1, 1, 2));
} 
*/