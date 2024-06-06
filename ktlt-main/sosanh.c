#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Nhap a:"); scanf("%d", &a);
    printf("Nhap b:"); scanf("%d", &b);
    printf("Nhap c:"); scanf("%d", &c);
    //max=(a>b?a:b)>c?(a>b?a:b):c;
    int max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    printf("Max la %d", max);

    return 0;
}
