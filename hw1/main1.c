#include <stdio.h>

void run_length_encoding(const char *input) {
    while (*input) {
        char ch = *input;
        int count = 0;
        while (*input == ch) { 
            count++;
            input++;
        }
        printf("%c%d", ch, count);
    }
    printf("\n"); 
}
int main() {
    char input[] = "AABBBCCCCddd"; 
    run_length_encoding(input);   
  return 0;
}

