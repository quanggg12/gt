#include <stdio.h>

int main()
{
  int m[10];
    int n, i, k, p;
    printf("So phan tu cua mang:");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("\n Nhap gia tri cua m[%d] =", i);
        scanf("%d", &m[i]);
    }
    printf("Nhap vi tri can chen:"); scanf("%d", &k);
    printf("Nhap gia tri can chen:"); scanf("%d", &p);
    if (k<n)
    for (i=n-1;i>=k;i--)
    m[i+1]=m[i];
    m[k]=p;
    n++;
    printf("Mang sau khi chen la: \n");
    for (i=0;i<n-1;++i)
    printf("%5d", m[i]);
   
    return 0;
}

