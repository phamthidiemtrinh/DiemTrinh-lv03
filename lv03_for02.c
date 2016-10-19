#include <stdio.h>
#include <math.h>
void main ()
{
    int i,so,tram,chuc,donVi,k;
    printf("cac so thoa man :\n");
    for(i=100;i<=999;i++)
    {
       so=i;
       donVi= so%10;
       so=so/10;
       chuc=so%10;
       so=so/10;
       tram=so%10;
       k=(tram*tram*tram)+(chuc*chuc*chuc)+(donVi*donVi*donVi);
       if (i==k) printf("%d; ",i);
    }
}


