#include <stdio.h>

int gcd(int small, int big){
    int i = small;
    while (i >= 1){
        if (big%i == 0 && small%i == 0) return i;
        else i--;
    }
}
int main(){
    int m, n;
    printf("Enter the two numbers m and n : ");
    scanf("%d%d", &m, &n);
    if (m > n){
        int temp = m;
        m = n;
        n = temp;
    }
    int result = gcd(m, n);
    printf("%d is the gcd of %d, %d", result, m, n);
    return 0;
}