#include <stdio.h>
int main() {
    int num, rev_num =0, remainder;
    scanf("%d", &num);
    while(num != 0) {
        remainder = num % 10;
       rev_num = rev_num * 10 + remainder;
        num /= 10;
    }
    printf("Reversed Number = %d", rev);
    return 0;
}
