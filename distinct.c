#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < i; j++){
            if(a[i] == a[j]){
                break;
            }
        }
        if(i == j){
            count++;
        }
    }
    if(count == n){
        printf("yes");
    }
    else{
        printf("no\n");
        printf("%d", count);
    }
    return 0;
}