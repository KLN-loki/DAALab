#include <stdio.h>

void binary(int a[],int low, int high, int key){
    if(low <= high){
        int mid = (low+high)/2;
        if (a[mid] == key){
            printf("key found at index : %d", mid);
            return;
        }
        else {
            if (key > a[mid]) binary(a, mid+1, high, key);
            else binary(a, low, mid-1, key);
        }
    }
    else printf("Key not found");
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the list : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the key to be searched : ");
    scanf("%d", &key);
    binary(a, 0,  n, key);
    return 0;
}


// int a[100];
//     FILE *fp1 = fopen("input.csv", "r");
//     FILE *fp2 = fopen("output.csv", "w");
//     char buff[100];
//     do
//     {
//         fgets(buff, 100, (FILE *)fp1);
//     } while ((getc(fp1)) != EOF);
//     char *token = strtok(buff, ",");
//     int i = 0;
//     while (token != NULL)
//     {
//         a[i] = atoi(token);
//         i++;
//         token = strtok(NULL, ",");
//     }