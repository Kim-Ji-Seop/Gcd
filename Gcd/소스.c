#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int a, int b);
//int lcm(int a, int b, int c);
int main() {
    int num1, num2;
    int big, small;
    int g_gcd;
    scanf("%d %d", &num1, &num2);
    if (num1 <= 10000 && num2 <= 10000) {
        if (num1 > num2) {
            big = num1;
            small = num2;
        }
        else if (num1 < num2) {
            big = num2;
            small = num1;
        }
        else {
            printf("숫자를 다시입력하시오..");
        }
    }
    g_gcd = gcd(big, small);
    printf("%d\n", gcd(big, small));
    printf("%d\n", big * small / g_gcd);
    return 0;
}

int gcd(int a, int b) {
    return (a % b == 0) ? b : gcd(b, a % b);
}
// int lcm(int a, int b, int c){
//     return ((a * b) / c);
// }