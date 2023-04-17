#include <stdio.h>

void secondMin(int a[], int n);

int main(){
    int n ;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    secondMin(a, n);
    return 0;
}

void secondMin(int a[], int n){
    
}