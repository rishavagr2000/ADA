#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int A[], int n) 
{ 
    printf("The Sorted Array is : \n");
    for (int i=0; i<n; ++i) 
        printf("\t%d",A[i]);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

void heapify(int A[], int n, int i) 
{ 
    int largest = i;  
    int l = 2*i + 1; 
    int r = 2*i + 2;  
  
    if (l < n && A[l] > A[largest]) 
        largest = l; 
  
    if (r < n && A[r] > A[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(&A[i], &A[largest]); 
        heapify(A, n, largest); 
    } 
} 

void heapSort(int A[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(A, n, i); 
  
    for (int i=n-1; i>0; i--) 
    { 
        swap(&A[0], &A[i]); 
        heapify(A, i, 0); 
    } 
}

int main()
{
    int A[100000],n;
    clock_t start,end;
    double time_required;
    printf("Enter the Size Of Array : ");
    scanf("%d",&n);
    printf("Enter %d Elements : \n",n);
    for(int i = 0;i < n;i++)
        scanf("%d",&A[i]);
    start = clock();
        heapSort(A,n);
    end = clock();
    printArray(A,n);
    time_required = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime Required To Sort %d Elements is %f",n,time_required);
    return 0;
}


Output:


Enter the Size Of Array : 5                                                                                                     
Enter 5 Elements :                                                                                                              
12                                                                                                                              
5                                                                                                                             
14                                                                                                                               
2                                                                                                                               
35                                                                                                                              
The Sorted Array is :                                                                                                           
        2       5       12       14       35                                                                                      
Time Required To Sort 5 Elements is 0.000003