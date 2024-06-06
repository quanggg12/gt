#include <stdio.h>

int main()
{
  int m[10];
    int n, i, k;
    printf("So phan tu cua mang:");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("\n Nhap gia tri cua m[%d] =", i);
        scanf("%d", &m[i]);
    }
    printf("Nhap vi tri can xoa:");
    scanf("%d", &k);
    if (k<n-1)
    for(i=k;i<n-1;++i)
    m[i]=m[i+1];
    printf("Mang sau khi xoa phan tu la: \n");
    for (i=0;i<n-1;++i)
    printf("%5d", m[i]);
   
    return 0;
}

