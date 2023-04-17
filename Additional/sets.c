#include <stdio.h>

void unionOf(int a[], int b[],int m,int n){
    int count = 0;
    int u[m+n];
    for(int i = 0; i < m; i++){
        int j;
        for(j = 0; j < count; j++){
            if(u[j] == a[i]) break;
        }
        if(j == count){
            u[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++){
        int j;
        for(j = 0; j < count; j++){
            if(u[j] == b[i]) break;
        }
        if(j == count){
            u[count] = b[i];
            count++;
        }
    }
    printf("Union of sets give : ");
    for(int i = 0; i < count; i++){
        printf("%d  ", u[i]);
    }
    printf("\n");
}

void intersectionOf(int a[], int b[], int m, int n){
    int len = (m > n)?n : m;
    int count = 0;
    int inter[len];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (a[i] == b[j]){
                int k;
                for (k = 0; k < count; k++){
                    if (inter[k] == a[i]) break;
                }
                if (k == count){
                    inter[count] = a[i];
                    count++;
                }
            }
        }
    }
    printf("intersection of sets give : ");
    for (int i = 0; i < count; i++){
        printf("%d  ", inter[i]);
    }
    printf("\n");
}

void differenceOf(int a[], int b[], int m, int n){
    // a-b
    int count = 0;
    int diff[m];
    for (int i = 0; i < m; i++){
        int j;
        for (j = 0; j < n; j++){
            if (a[i] == b[j]) break;
        }
        if (j == n){
            int k;
            for (k = 0; k < count; k++){
                if(a[i] == diff[k]) break;
            }
            if (k == count){
                diff[count] = a[i];
                count++;
            }
        }
    }
    printf("difference of two sets : ");
    for (int i = 0; i < count; i++){
        printf("%d  ", diff[i]);
    }
    printf("\n");
}

int main(){
    int m, n;
    printf("Enter the first and second set sizes : ");
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    printf("Enter the elements of first set : ");
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of second set : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    unionOf(a, b, m, n);
    intersectionOf(a, b, m, n);
    differenceOf(a, b, m, n);
    return 0;
}