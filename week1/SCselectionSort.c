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
    count++;
    for (int i = 0; i < n-1; i++){
        count++;
        int min = i;
        count++;
        for (int j = i+1; j < n; j++){
            count++;
            if (a[j] < a[min]){
                min = j;
                count++;
            }
            count++;
        }
        count++;
        if (min != i){
            int temp = a[i];
            count++;
            a[i] = a[min];
            count++;
            a[min] = temp;
            count++;
        }
        count++;
    }
    count++;
    for (int i = 0; i < n; i++){
        printf("%d  ", a[i]);
    }
    printf("Step count = %d", count);
}

