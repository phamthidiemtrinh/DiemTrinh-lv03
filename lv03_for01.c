#include <stdio.h>
void main ()
{
    float s=0;
    int i,n;
    printf("nhap n= \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       s+=(float)1/i;
    }
    prinstf("tong : s=%f",s);
}


