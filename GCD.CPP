#include <stdio.h>


int gcd(int m, int n)
{
if (m==0)
return n;
else if (n==0)
return m;

else if (m==n)
return m;

else if(m>n)
 return gcd(m-n,n);
 
else 
return gcd(m, n-m);

}


int main()
{
int a;int b;
a =24;
b =10;
int c = gcd(a,b);
printf("%d\n", c);
}



