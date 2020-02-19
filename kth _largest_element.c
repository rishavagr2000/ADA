#include<stdio.h>
#include<math.h>

void buble_sort(int a[], int n)
{
int temp; 
int i,j;
for(i=0; i<n-2; i++)
{
for(j=0; j<n-2-i; j++)
{
if (a[j] < a[j+1])
{

 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
}
}
}
}

int main()
{
int a[20], n, k, i;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i =0; i<n; i++)
scanf("%d", &a[i]);
buble_sort(a,n);
printf("enter the value of k\n");
scanf("%d", &k);
if (k>n) {
printf("error\n"); }
else
{
for (i=0; i<k; i++)
{
printf("%d largest numbers is %d\n",i+1, a[i]);
}
printf("\n");
}
return 0;
}

 

