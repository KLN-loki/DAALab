#include <stdio.h> 
#include <string.h> 

// Function to swap two strings 
void swap (char* a, char* b) 
{ 
    char t[100]; 
    strcpy(t, a);
    strcpy(a, b); 
    strcpy(b, t);
} 

// Function to Bubble Sort an array of strings 
void bubbleSort(char a[][100], int n) 
{ 
    int i, j;

    // Loop for sorting 
    for (i = 0; i < n - 1; i++) { 
        // Last i elements are already in place 
        for (j = 0; j < n - i - 1; j++) {
            // Comparing consecutive strings 
            if (strcmp(a[j], a[j + 1]) > 0) 
                swap(a[j], a[j + 1]);
        } 
    } 
} 

// Driver program 
int main() 
{ 
    char a[][100] = { "GeeksforGeeks", "GeeksQuiz", "CLanguage", "CPlusPlus" }; 
    int n = sizeof(a) / sizeof(a[0]); 
    // Function calling 
    bubbleSort(a, n);
    // Printing the sorted array of strings 
    printf("Sorted array is:\n"); 
    for (int i = 0; i < n; i++) 
        printf("%s\n", a[i]);
    return 0; 
}
