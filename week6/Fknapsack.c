// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the size of the elements : ");
//     scanf("%d", &n);
//     int p[n], w[n];
//     printf("Enter the profits : ");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &p[i]);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &w[i]);
//     fknapsack(p, w, n);
//     return 0;
// }

// void fknapsack(int p[], int w[], int n)
// {
//     float pw[n], x[n];
//     for (int i = 0; i < n; i++)
//         pw[i] = p[i] / (w[i] * 1.0);
// }


#include <stdio.h>
float Fknapsack(int p[], int w[], int m, int n){
    int Rc = m;
    float PW[n];
    for (int i = 0; i < n; i++){
        PW[i] = p[i]/(w[i]*1.0);
    }
    // bubble sort
    for(int j = 0; j < n - 1; j++){
        for(int i = 0; i < n - j - 1; i++) {
            if(PW[i] < PW[i+1]){
                float temp = PW[i];
                PW[i] = PW[i + 1];
                PW[i + 1] = temp;
                int weiTemp = w[i];
                w[i] = w[i+1];
                w[i+1] = weiTemp;
                int protemp = p[i];
                p[i] = p[i+1];
                p[i+1] = protemp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%f  ", PW[i]);
    }
    float result = 0.0;
    for(int i = 0; i < n; i++){
        if(w[i] <= Rc){
            result = result + p[i];
            Rc = Rc - w[i];
        }
        else {
            float temp = Rc/w[i];
            result = result + (temp*p[i]);
            break;
        }
    }
    return result;
}
int main(){
    int n, m;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the size of knapsack : ");
    scanf("%d", &m);
    int p[n], w[n];
    printf("enter the profits : ");
    for(int i = 0; i < n; i++) scanf("%d", &p[i]);
    printf("Enter the weights : ");
    for (int i = 0; i < n; i++) scanf("%d", &w[i]);
    float result = Fknapsack(p, w, m, n);
    printf("\nMaximum profit = %f", result);
    return 0;
}