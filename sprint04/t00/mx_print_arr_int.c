void mx_printint(int n);
void mx_printchar(char c);

void mx_print_arr_int(const int *arr, int size) {
    for(int counter=0; counter<size; counter++) {
        mx_printint(arr[counter]);
        mx_printchar('\n');
    }
    
}

// int main() {
//     int arr[] = {1, 2, 3};
//     mx_print_arr_int(arr, 4);
// }