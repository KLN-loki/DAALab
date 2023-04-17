
#include<stdio.h>
int MaxMin(int arr[100], int low, int high);
int max, min;
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    MaxMin(arr,0,n-1);
    printf("\nMaximum = %d\nMinimum = %d\n", max, min);
}
int MaxMin(int arr[],int low, int high)
{
    if(low==high)
    {
        max = arr[low];
        min = arr[low];
    }
    else if(low == high-1)
    {
        if(arr[low]>arr[high])
        {
            max = arr[low];
            min = arr[high];
        }
        else
        {
            max = arr[high];
            min = arr[low];
        }
    }
    else
    {
        int mid=(low+high)/2;
        MaxMin(arr,low,mid);
        int max1 = max;
        int min1 = min;
        MaxMin(arr,mid+1,high);
        if(max1>max)
        {
            max = max1;
        }
        if(min1<min)
        {
            min = min1;
        }
    }
}


// #include <stdio.h>
// int binary_search(int a[], int size, int x);

// int main(int argc, char const *argv[])
// {
//     int a[100], size, x;
//     printf("Enter the size of the array : ");
//     scanf("%d", &size);
//     printf("Enter the elements of the array:\n");
//     for(int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element to be searched : ");
//     scanf("%d", &x);
//     int res = binary_search(a,size,x);
//     if(res == -1)
//     {
//         printf("Element %d is not present\n",x);
//     }
//     else
//     {
//         printf("Element %d is present at position %d\n",x,(res+1));
//     }
//     return 0;
// }

// int binary_search(int a[], int size, int x)
// {
//     int mid;
//     int low = 0, high = size-1;
//     while(low <= high)
//     {
//         mid = (low+high)/2;
//         if(x < a[mid])
//         {
//             high = mid - 1;
//         }
//         else if(x > a[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }


// #include<stdio.h>
// int a[100], n;
// void merge(int low, int mid, int high)
// {
// 	int i = low, h = low, j = mid + 1, b[n];
// 	while(h <= mid && j <= high){
// 		if(a[h] <= a[j])
// 		{
// 			b[i] = a[h];
// 			h++;
// 		}
// 		else{
// 			b[i] = a[j];
// 			j++;
// 		}
// 		i++;
// 	}
// 	if(h > mid){
// 		for(int k = j ; k <= high; k++, i++)
// 			b[i] = a[k];
// 	}
// 	else{
// 		for(int k = h ; k <= mid; k++, i++)
// 			b[i] = a[k];
// 	}
// 	for(int k = low ; k <= high; k++)
// 			a[k] = b[k];
// }
// void mergesort(int low, int high)
// {
// 	if(low < high)
// 	{
// 		int mid = (low + high)/2;
// 		mergesort(low, mid);
// 		mergesort(mid + 1, high);
// 		merge(low, mid, high);
// 	}
// }

// int main(){
// 	int i;
// 	printf("Enter the size of the array : ");
// 	scanf("%d", &n);
// 	printf("Enter array elements : ");
// 	for(i = 0; i < n; i++)
// 		scanf("%d", &a[i]);
// 	printf("Elements before sorting : ");
// 	for(i = 0; i < n; i++)
// 		printf("%d ", a[i]);
// 	mergesort(0, n-1);
// 	printf("\nElements after sorting : ");
// 	for(i = 0; i < n; i++){
// 		printf("%d ", a[i]);
// 	}
// 		return 0;
		
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int partition(int a[],int l,int h)
// {
// 	int t=a[l];
// 	int lp=l+1;
// 	int rp=h-1;
// 	while(lp<=rp)
// 	{
// 		while(a[lp]<=t)
// 		{
// 			lp=lp+1;
// 		}
// 		while(a[rp]>t)
// 		{
// 			rp=rp-1;
// 		}
// 		if(lp<rp)
// 		{
// 			int temp=a[lp];
// 			a[lp]=a[rp];
// 			a[rp]=temp;
// 		}
// 	}
// 	a[l]=a[rp];
// 	a[rp]=t;
// 	return rp;
// }
// void Quicksort(int a[], int low, int high)
// {
// 	if(low<high)
// 	{
// 		int j=partition(a,low,high+1);
// 		Quicksort(a,low,j-1);
// 		Quicksort(a,j+1,high);
// 	}
// }
// int main()
// {
// 	int n=0,i=0;
// 	int a[25];
// 	char str[100];
// 	FILE *fp;
// 	fp=fopen("file.csv","r");
// 	fgets(str,100,fp);
// 	char *token=strtok(str,",");
// 	while(token!=NULL)
// 	{
// 		a[i]=atoi(token);
// 		printf("%d\n", a[i]);
// 		n++;
// 		i++;
// 		token=strtok(NULL,",");
// 	}
// 	Quicksort(a,0,n);
// 	printf("After sorting: ");
// 	for(int i=0;i<n;i++)
// 	{
// 		printf("%d ", a[i]);
// 	}
// 	return 0;
// }