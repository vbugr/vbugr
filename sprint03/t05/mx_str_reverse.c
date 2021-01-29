#include <stdio.h>

void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {

int front = 0;
int back = mx_strlen(s) - 1;
int half = mx_strlen(s)/2;

while (front < half) mx_swap_char(&s[front++], &s[back--]);
}