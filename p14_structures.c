# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct
{
    char yourName[11];
    int orderNo[5];
    int orderQ[5];
}autoRest;

void create_order(autoRest customerNo[],int x)
{
    printf("Enter your name \n");
    scanf("%s",customerNo[x].yourName);
  int a,b,n,i=0;  char check='q';
  for(b=0;b<5;b++)
  {
      printf("Enter order no. ");
      scanf("%d",&customerNo[x].orderNo[b]); i++;
      if(customerNo[x].orderNo[b]<1 || customerNo[x].orderNo[b]>20)
      {
          do{printf("Enter correct order no.\n");
             scanf("%d",&customerNo[x].orderNo[b]);
            } while(customerNo[x].orderNo[b]<1 || customerNo[x].orderNo[b]>20);
      };
       printf("Enter order quantity ");
       scanf("%d",&customerNo[x].orderQ[b]);
             if(customerNo[x].orderQ[b]<1 || customerNo[x].orderQ[b]>15)
      {
          do{printf("Min order 1 and max order 15. Enter quantity again \n");
             scanf("%d",&customerNo[x].orderQ[b]);
            } while(customerNo[x].orderQ[b]<1 || customerNo[x].orderQ[b]>15);
      };
      printf("Enter 'e' to complete order and any other key to continue ordering! ");
      scanf(" %c",&check);
       if(check=='e'){break;};
  };
  printf("Customer %d: Customer name: %s ",x+1,customerNo[x].yourName);
  printf("The orders are...\n");
  for(b=0;b<i;b++)
  {
      printf("Order no. %d, Order quantity %d \n",customerNo[x].orderNo[b],customerNo[x].orderQ[b]);
  };
};


int main()
{
    int n,i=0;char fin='q';
    autoRest customerNo[50];

    for(n=0;n<50;n++)
    {
      create_order(customerNo,n); i++;
       printf("If all customers have completed order, press 'e', else press other key ");
       scanf(" %c",&fin);
       if(fin=='e'){break;};
    };

    return 0;
}
