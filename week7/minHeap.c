#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void heapify(int a[], int size, int i)
{
    if (size == 1)
    {
        printf("Single element in the heap");
    }
    else
    {
        int smallest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < size && a[l] < a[smallest])
            smallest = l;
        if (r < size && a[r] < a[smallest])
            smallest = r;
        if (smallest != i)
        {
            swap(&a[i], &a[smallest]);
            heapify(a, size, smallest);
        }
    }
}
void insert(int a[], int n_num)
{
    if (size == 0)
    {
        a[0] = n_num;
        size += 1;
    }
    else
    {
        a[size] = n_num;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(a, size, i);
        }
    }
}
void deleteroot(int a[], int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == a[i])
            break;
    }

    swap(&a[i], &a[size - 1]);
    size -= 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(a, size, i);
    }
}
void print(int a[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int a[10];
    insert(a, 40);
    insert(a, 80);
    insert(a, 70);
    insert(a, 35);
    insert(a, 90);
    insert(a, 45);
    insert(a, 50);
    printf("Min-Heap array: ");
    print(a, size);
    deleteroot(a, 40);
    printf("After deleting an element: ");
    print(a, size);
}
