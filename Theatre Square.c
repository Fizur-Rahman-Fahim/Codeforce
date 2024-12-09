#include<stdio.h>
#include<math.h>
int main()
{

    long long int n,m,a;
    long long int product;
    double row,col,t1,t2,t3;



   scanf("%lld %lld %lld",&n,&m,&a);

   t1=n;
   t2=m;
   t3=a;


   row=(double)ceil(t1/t3);
   col=(double)ceil(t2/t3);

  product= row*col;



    printf("%lld",product);


}
