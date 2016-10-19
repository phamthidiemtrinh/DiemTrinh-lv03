#include <stdio.h>
#include <math.h>
void main ()
{
    int a,b,c;
    printf("nhap 2 so a,b \n");
    scanf ("%d%d",&a,&b);
     while (c!=0)
    {
        c=a%b;
        a=b;
        b=c;

     }
     printf("UCLN=%d",a);
}


