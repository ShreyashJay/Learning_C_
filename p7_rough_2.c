# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
void convUp(char str[])   // function to convert to upprer case
{
    int b;
    int temp;
    for(b=0;str[b]!='\0';b++)
    {
        if((int)str[b]>(int)'Z')
            {  temp=(int)str[b]-((int)'a'-(int)'A'); str[b]=temp; };
    };
}

void ascChar(char str[])
{
    int a,b; char temp;
    for(a=0;str[a]!='\0';a++)
    {
        for(b=a;str[b]!='\0';b++)
        {
            if((int)str[b]<(int)str[a])
            {
                temp=str[a]; str[a]=str[b]; str[b]=temp;
            };
        };
    };
}

int main()
{  /*
srand(time(NULL));
char st[10];
printf("Enter a string.\n");
scanf("%s",st);
printf("You entered: %s \n",st);
convUp(st);
printf("New string is %s \n",st);


int i[]={1,6,4,5,9,0,-1};
int a,b,temp;
printf("The length of the string is %d \n",sizeof(i)/4);
for(b=0;b<sizeof(i)/4;b++)  // rearranging in ascending order
{
    for(a=b;a<sizeof(i)/4;a++)
    {
        if(i[b]>i[a]){temp=i[b];i[b]=i[a];i[a]=temp;};
    };
};
for(b=0;b<sizeof(i)/4;b++){printf(" %d ",i[b] );};

int m,j,n;
printf(" \n Enter no. of rows: ");
scanf("%d",&m);
printf("Enter no. of columns: ");
scanf("%d",&n);
int ar1[10][10];
for(b=0;b<m;b++)
{
    for(a=0;a<n;a++)
    {
        ar1[b][a]=rand()%5;
    };
};

for(b=0;b<m;b++)
{
    for(a=0;a<n;a++)
    {
       printf("%d ", ar1[b][a]);
    };
    printf("\n");
};  printf("\n");

for(b=0;b<m-1;b++)
{
    for(a=0;a<n-1;a++)
    {
        if(ar1[b][a]==0 && ar1[b][a+1]==1 && ar1[b+1][a]==2 && ar1[b+1][a+1]==3)
        {
            printf( "The pattern is present at ar1[b][a] ar1[b][a+1] ar1[b+1][a] ar1[b+1][a+1] \n");
        };

    };
};

//  finding string in a string
int a,b,c,n;
char s1[9],s2[4],s3[6];
printf("Enter string of length 8>>3>>5 :\n"); scanf("%s %s %s",s1,s2,s3);
//printf("Enter string 2(lenght 3) :"); scanf("%s",&s2);
//printf("Enter string 3(lenght 5) :"); scanf("%s",&s3);
printf("\n");
for(b=0;b<8;b++){printf(" s1[%d]=%d",b,s1[b]);};printf("\n");
for(b=0;b<3;b++){printf(" s2[%d]=%d",b,s2[b]);};printf("\n");
for(b=0;b<5;b++){printf(" s1[%d]=%d",b,s3[b]);};printf("\n");
for(a=0;a<6;a++)
{
        b=a;
        if((int)s1[b]==(int)s2[0]&&(int)s1[b+1]==(int)s2[1]&&(int)s1[b+2]==(int)s2[2])
        {
            printf("The string is in %d th position.\n",b);
        };
};

// finding 3 numbers whose sum is 40
int trip[]={3,4,66,33,22,11,32,29,18,20,15,3,1,2,9,30};
for (a=0;a<sizeof(trip)/4;a++)
{
    for(b=a+1;b<sizeof(trip)/4;b++)
    {
        for(c=b+1;c<sizeof(trip)/4;c++)
        {
            if(trip[a]+trip[b]+trip[c]==40){printf("sum of %d,%d,%d is 40 \n",trip[a],trip[b],trip[c]);};
        };
    };
};      */

// checking anagram
int a,b,c;
char ana[6];
printf("Enter a five letter word.\n");
scanf("%s",&ana);
for(b=0;b<5;b++){printf(" ana[%d]=%d",b,ana[b]);};printf("\n");
ascChar(ana);
printf(" \nThe size of char is %d \n",sizeof(char));
printf("Arranged in ascending order entered by you... \n");
for(b=0;b<5;b++){printf(" %c",ana[b]);};printf("\n");
char st[6]={"aboot"};
ascChar(st);
printf("Arranged in ascending order pre-entered... \n");
for(b=0;b<5;b++){printf(" %c",st[b]);};printf("\n");

for(a=0;a<5;a++)
{
    if((int)st[a]==(int)ana[a])
    {
        if(a==4){printf("It is anagram \n"); continue;};
    }else{printf("It is not an anagram");break;};
};

    return 0;
}
