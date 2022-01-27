# include <stdio.h>
# include <stdlib.h>
# include <time.h>

struct order
{
    char name[11];
    int quantity;
    int item_no;
};

/* to randomly generate a square matrix of given size, then print only the rows
or columns or main diagonal if the sum of their elements is 24 */
int main()
{
    int a,b,c,d,e,f,ar[4][4];
    srand(time(NULL));
    for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
        {
            ar[a][b]=rand()%5+4;
        };
    };

     for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
        {
            printf("  %00d ",ar[a][b]);
        };
        printf("\n \n");
    };

  int ard[4][4];
    for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
        {
            ard[a][b]=0;
        };
    };


     for(a=0;a<4;a++)
    {
        c=0;e=0;
        for(b=0;b<4;b++)
        {
            c+=ar[a][b]; if(c==24 && b==3) {for(f=0;f<4;f++){ard[a][f]=ar[a][f];};};// row checker
            d+=ar[b][a]; if(d==24 && b==3) {for(f=0;f<4;f++){ard[f][a]=ar[f][a];};}; // column checker
            e+=ar[b][b]; if(e==24 && b==3) {for(f=0;f<4;f++){ard[f][f]=ar[f][f];};}; // diagonal checker
        };
    };

     for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
        {
           if (ard[a][b]!=0) {printf("  %00d ",ard[a][b]);};
        };
        printf("\n \n");
    };



    return 0;
}
