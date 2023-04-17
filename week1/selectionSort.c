#include <stdio.h>

void SelectionSort(int a[], int n);

int main(){
    int n ;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    SelectionSort(a, n);
    return 0;
}

void SelectionSort(int a[], int n){
    int count = 0;
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        if (min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d  ", a[i]);
    }
    printf("second element = %d", a[1]);
}

