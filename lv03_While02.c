#include <stdio.h>
#include <math.h>
void main ()
{
    float dienTich,chuVi;
    int i;
    printf("nhap chu vi: \n");
    scanf ("%f",&chuVi);
    //công thức có sẵn (a+b)^2/4>=ab khi a=b; làm được với bất kỳ chu vi nào nhập vào (không âm),nguyên hay không cũng ok;
    //bài While chỉ áp dụng đối với những chuvi chia hết cho 4;
    dienTich=(chuVi/4)*(chuVi/4);
    printf("dien tich lon nhat = %f\n ",dienTich);
    // while.
    dienTich=0;
    i=0;
    while (i<=(int)(chuVi/4))
    {
        i++;
        if (i==chuVi/4)
        {dienTich =i*i;
          break;
         }
    }
    printf("dien tich (while) = %f\n",dienTich);
}
