#include<stdio.h>

int main()
{

    int n,i,j,sum=0,count=0;
    scanf("%d",&n);
    int arr[n][3];

    for(i=0;i<n;i++)
    {
        for(j=0; j<3;j++)
        {

            scanf("%d",&arr[i][j]);
            sum= sum+arr[i][j];


        }

        if(sum>1)
        {
            count++;
        }
        sum=0;

    }

    printf("%d",count);


}
