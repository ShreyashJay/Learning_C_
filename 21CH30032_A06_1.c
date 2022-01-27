# include <stdio.h>
# include <math.h>
struct comp
{
    double real;
    double img;
}a,b,c,d,e;

void print(struct comp a)
{
    if(a.img<0){printf("The number is %2.3lf -i%2.3lf \n",a.real,-1*(a.img));}
    else {printf("The number is %2.3lf +i%2.3lf \n",a.real,a.img);};
}

void add(struct comp a, struct comp b)
{
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    if(c.img<0){printf("The sum of a,b is %2.3lf -i%2.3lf \n",c.real,-1*(c.img));}
    else {printf("The sum of a,b is %2.3lf +i%2.3lf \n",c.real,c.img);};
}

void product(struct comp a, struct comp b)
{
    d.real=a.real*b.real-a.img*b.img;
    d.img=a.real*b.img+a.img*b.real;
        if(c.img<0){printf("The product of a,b is %2.3lf -i%2.3lf \n",d.real,-1*(d.img));}
    else {printf("The product of a,b is %2.3lf +i%2.3lf \n",d.real,d.img);};
}
    void polar(struct comp a)
    {
        printf("The polar form is \n");
        double sum=a.real*a.real+a.img*a.img;
        double x=sqrt(sum);
        if(a.img>=0){printf("%2.3lf(%2.3lf + i%2.3lf)",x,a.real/x,a.img/x);}
        else {printf("%2.3lf(%2.3lf - i%2.3lf)",x,a.real/x,-1*(a.img/x));}
    }

int main()
{
    printf("Enter real part of complex number a \n");
    scanf("%lf",&a.real);
     printf("Enter imaginary part of complex number a \n");
    scanf("%lf",&a.img);

    print( a);  // print complex number in correct format

     printf("Enter real part of complex number b \n");
    scanf("%lf",&b.real);
     printf("Enter imaginary part of complex number b \n");
    scanf("%lf",&b.img);

    add(a,b);  // display sum of a and b
    product(a,b);  // display product of a and b
    polar(a);


    return 0;
}
