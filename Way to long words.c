#include<stdio.h>
#include<string.h>

int main()
{

   int i=0 , n ,len;

   char string[100];

   scanf("%d",&n);


    while(i!=n)

      {

       scanf("%s",string);
       len= strlen(string);
       if(len<=10)
        printf("%s\n",string);
       else
       printf("%c%d%c\n",string[0],len-2,string[len-1]);
       i++;

      }


}
