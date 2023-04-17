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
    int count = 0;
    for (int i = 2; i < n; i++){
        count++;
        int key = a[i];
        count++;
        int j = i-1;
        count++;
        while (j >= 0 && a[j] > key){
            count++;
            a[j+1] = a[j];
            count++;
            j--;
            count++;
        }
        count++;
        a[j+1] = key;
        count++;
    }
    count++;
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nstep count = %d", count);
}