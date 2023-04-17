#include <stdio.h>

void insertionSort(int a[], int n);

int main(){
    int n ;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    return 0;
}

void insertionSort(int a[], int n){
    for (int i = 2; i < n; i++){
        int key = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}