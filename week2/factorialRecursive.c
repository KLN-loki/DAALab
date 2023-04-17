#include <stdio.h>

long long factorial(int n){
    if (n <= 1) return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    long long fact = factorial(n);
    printf("%d! = %lld", n, fact);
    return 0;
}