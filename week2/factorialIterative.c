#include <stdio.h>

long long factorial(int n){
    long long fact = 1;
    for(int i = 2; i <= n; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    long long fact = factorial(n);
    printf("%d! = %lld", n, fact);
    return 0;
}