// frequency
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
        try (Scanner s = new Scanner(System.in)) {
            n = s.nextInt();

            a = new int[n];

            System.out.println("Enter the elements in the array : ");
            for (int i = 0; i < n; i++){
                a[i] = s.nextInt();
            }
        }
        int f[][]= new int[n][3];
        int count = 1;
        boolean exist = false;
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
                f[i][0] = a[i];
                f[i][1] = count;
                System.out.println(a[i] + " frequency is " + count);
            }
            exist = false;
            count = 1;
        }
        
        // for (int i = 0; i < n; i++){
        //     int max = a[i];
        //     for (int j = i+1; j < n; j++){
        //         if (a[i])
        //     }
        // }
    }
}
}