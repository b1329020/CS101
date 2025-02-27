#include <stdio.h>

void run_length_decoding(const char *encoded) {
    while (*encoded) {
        char ch = *encoded++;  
        int count = *encoded - '0';  
        encoded++;  

        for (int i = 0; i < count; i++) {
            putchar(ch); 
        }
    }
    printf("\n");
}

int main() {
    char input[] = "A4B1C3f3"; 
    run_length_decoding(input);
    return 0;
}

