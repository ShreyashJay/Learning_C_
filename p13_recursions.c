# include <stdio.h>
# include <string.h>
int fibo(int a)
{
    if(a==1 || a==2) {return 1;} else{return fibo(a-1)+ fibo(a-2);};
}
int findMax(int n,int ar[])
{
    int temp;
    if(n==1){return ar[0] ;}
    temp=findMax(n-1,ar);
    if(ar[n-1]>temp){ return ar[n-1];} else return temp;
}
int sumSquares(int n)
{
   int sum;
   if(n==1) {return 1;}
   else return n*n + sumSquares(n-1);
}
int sqSum(int a,int b)
{
    int n=b;
    if(n==a){return a*a;}
    else return b*b+sqSum(a,b-1);
}
void revInt(int i)
{
    if(i<10){printf("%d ",i);return;}
    else
    {
       printf("%d ",i%10) ; revInt(i/10);
    };
}
int count(int c)
{

    if(c<10){return 0;}
    else if(c%10!=0){return count(c/10);}
    else {return (1+count(c/10));};
}
int binSearch(int x,int l, int u,int ar[])
{
    if (l>u){printf("Negative..not present \n");return 0;}
    int mid;
    mid=(l+u)/2;
    if(ar[mid]==x){printf("Affirmative....%d th term",mid+1);return ar[mid];}
    else
    {
        if(ar[mid]>x){return binSearch(x,l,mid-1,ar);}
        else {return binSearch(x,mid+1,u,ar);};
    };
}

void revString(int u,char ar[])
{
    if(u==0){printf("%c",ar[0]);return;};
    printf("%c",ar[u]);
    revString(u-1,ar);
}
void dToBin(int n)
{
    if(n>=2){dToBin(n/2);printf("%d ",n%2);}
    else if(n==0){printf("%d ",0) ;}
    else if(n==1){printf("%d ",1) ;};
}
void palindromeCheck(char pal[],int u,int l)
{
    if(l>=u){printf("It is palindrome. \n");return;};
    if(pal[u]==pal[l]){palindromeCheck(pal,u-1,l+1);}
    else{printf("Not a palindrome. \n");return;};
}
int main()
{
   /*  int b;
   // printf("the 5th term of fibo series is %d \n",fibo(5));
    // printf("The factorial of 5 is %d \n",fact(5));

int arr[6]={2,3,2,-1,3,2};
printf("The max is %d \n",findMax(6,arr));

printf("The sum of squares of n integers is %d \n",sumSquares(3));

printf("The sum of squares between 2 and 5 is %d \n",sqSum(5,10));

printf("Printing 1234 in reverse. \n");
revInt(1234);

printf(" \n The number of zeros are %d \n",count(401));

int a[7]={1,8,10,11,13,14,20};
printf("Finding the desired number %d \n",binSearch(11,0,7,a));

char name[6] = {"smart"};
printf("The severse of a string 'water' is  \n");
revString(4,name);

printf("Decimal 4 to binary is \n");
dToBin(4);

char pal[]={"sammas"};
int length=strlen(pal);
palindromeCheck(pal,length-1,0);   */

int ar[]={2,3,4,5,9,5,9,0};
int size=sizeof(ar);
printf("size is %d \n",size);
 return 0;
 }
