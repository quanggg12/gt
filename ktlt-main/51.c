#include <stdio.h>

int main()
{
    int a[10];
    int n, i, j, x;
    int tmp;
    printf("Nhap vao so luong day so:");
    scanf("%d", &n);
    while (n<=5 || n>=10){
        printf("\nHay nhap lai so luong day so(5<=n<=10):");
        scanf("%d", &n);
    }
    for (i=0;i<n;i++){
        printf("Nhap gia tri cho phan tu thu a[%d]:", i+1);
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu sau khi nhap la:\n");
    for (i=0;i<n;i++)
    printf("%5d", a[i]);
     
    
     printf("\nNhap vao so x xuat hien trong mang:"); scanf("%d", &x);
     int dem = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            dem++;
        }
    }
    printf("\nSo lan x xuat hien trong mang la :%d", dem);
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\nMang sau khi sap xep la:");
    for (i=0;i<n;i++){
        printf("%5d ", a[i]);
    }
    return 0;
    
}
