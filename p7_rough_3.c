#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void saddle1(int **p,int i,int j)
{
    int a,b,count=0;
    int max1,max2,r1,r2,c1,c2,min1,min2;
    for(b=0;b<i;b++)
    {
        max1=p[b][0];r1=b;c1=0;
        max2=p[0][b];r2=0;c2=b;
        for(a=0;a<j;a++)
        {
            if(max1<p[b][a]){max1=p[b][a];r1=b;c1=a;};
            if(max2<p[a][b]){max2=p[a][b];r2=a;c2=b;};
        };

        min1=max1;
        for(a=0;a<i;a++)
      {
     if(min1>p[a][c1]){min1=p[a][c1];};
     if(a==i-1 && min1==max1){printf("Saddle at[%d][%d]=%d \n",r1,c1,p[r1][c1]);count++};
      };

        min2=max2;
        for(a=0;a<j;a++)
      {
     if(min2>p[r2][a]){min2=p[r2][a];};
     if(a==j-1 && min2==max2){printf("Saddle at[%d][%d]=%d \n",r2,c2,p[r2][c2]);count++};
      };
    };
    if(count==0){printf("There is no saddle point. \n");};
}
int main()
{

    int i,j,a,b;
     printf("Enter no. of rows: ");
     scanf("%d",&i);
     printf("Enter no. of columns: ");
     scanf("%d",&j);
     int **ar;
     ar=(int **)malloc(i*sizeof(int *));
     for(b=0;b<i;b++)
     {
         ar[b]=(int*)malloc(j*sizeof(int));
     };

     for(b=0;b<i;b++)
     {
         for(a=0;a<j;a++)
         {
             printf("Enter ar[%d][%d]:",b,a);
             scanf("%d",&ar[b][a]);
         };
         printf("\n");
     };

saddle1(ar,i,j);
    return 0;
}
