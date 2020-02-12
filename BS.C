#include<stdio.h>

void bubbleSort(int array[], int size)
{
  for (int step = 0; step < size - 1; ++step)
  {
    for (int i = 0; i < size - step - 1; ++i)
    {
      if (array[i] > array[i + 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{
  int n,i,a[20];
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements of the array: ");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  bubbleSort(a, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(a, n);
}
