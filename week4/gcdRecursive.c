#include <stdio.h>

int count = 0;

int gcd(int small, int big){
    count++;
    if(big%small == 0){
        return small;
    }
    else{
        return gcd(big%small, small);
    }
}

int main(){
    int m, n;
    printf("Enter the two numbers m and n : ");
    scanf("%d%d", &m, &n);
    if (m > n){
        int temp = m;
        m = n;
        n = m;
    }
    int result = gcd(m, n);
    printf("%d is the gcd of %d, %d", result, m, n);
    printf("\nstep Count = %d", count);
    return 0;
}