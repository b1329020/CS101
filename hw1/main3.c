#include <stdio.h>

int main()
{
    char a[] = "10001111";  
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        if (a[i] == '1') {
            ans += 1 << (7 - i);  // 用位元運算計算 2^(7-i)
        }
    }
    printf("%X\n", ans);  
    return 0;
}

