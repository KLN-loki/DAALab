#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int size = 0;
    int f[n][2];
    int count = 1;
    bool exist = false;
    for (int i = 0; i < n; i++){
        for (int k = i-1; k >= 0; k--){
            if (a[k] == a[i]){
                exist = true;
            }
        }
        if (exist == false){
            for (int j = i+1; j < n; j++){
                if (a[i] == a[j]){
                    count++;
                }
            }
            f[size][0] = a[i];
            f[size][1] = count;
            size++;
        }
        exist = false;
        count = 1;
    }
    int max = f[0][1];
    count = 0;
    for(int i = 1; i < size; i++){
        if(max < f[i][1]){
            max = f[i][1];
            count = i;
        }
    }
    printf("%d", f[count][0]);
    return 0;
}