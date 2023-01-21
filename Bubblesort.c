#include<stdio.h>
 
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) 
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) 
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}

int main(){
    
    int A[] = {1, 2, 3, 4, 18, 34, 825, 19, 77, 0, 97};
    int n = 11;
    printArray(A, n); 
    bubbleSort(A, n); 
    printArray(A, n); 
    return 0;
}
