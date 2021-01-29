void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    
    int delim_flag=0;

    do {
        if(*str == delim) {
           if(delim_flag==0) mx_printchar('\n');
            delim_flag=1;
        }
        else {
               mx_printchar(*str);
               delim_flag = 0;
           } 
           str++;
    }
    while (*str != '\0');
    mx_printchar('\n');
}

// int main(void)
// {
//     mx_str_separate("game over", ' ');
//     return 0;
// }