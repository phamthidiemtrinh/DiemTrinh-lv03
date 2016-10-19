#include <stdio.h>
#include <math.h>
void main ()
{
    int a,b,c,i;
    printf("nhap 2 so a,b \n");
    scanf ("%d%d",&a,&b);
    c=a;
    if (b>a) c=b;
    i=(int)(c/2);
    while (i>=1)
    {
        if ((a%i==0)&&(b%i==0))
        {
            printf ("UCLN= %d ",i);
            break;
        }
        i--;
    }


}


