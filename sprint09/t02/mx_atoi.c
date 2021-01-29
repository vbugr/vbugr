#include <stdio.h>
#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str) {
    int result = 0;
    bool flag = false;
    int sign = 1;
    for (int i = 0; str[i]; i++) {
        if (mx_isdigit(str[i])) {
            result = (result * 10) + (str[i] - 48);
            flag = true;
        }
        else if (str[i] == '+' || str[i] == '-') {
            if (flag)
                return result * sign;
            if (str[i] == '-')
                sign = -1;
            flag = true;
        }
        else if (!mx_isspace(str[i]) || flag) {
            return result * sign;
        }
    }
    return result * sign;
}
