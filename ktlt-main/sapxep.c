#include <stdio.h>

int main()
{
    int m[100];
    int n;
    int i, j, k, temp;
    printf("Cho biet so phan tu cua mang:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap gia tri cua m[%d]=", i);
        scanf("%d", &m[i]);
    }
    printf("Mang truoc khi sap xep\n");
    for (i = 0; i < n; i++)
    printf("%3d", m[i]);
   
    for (i = 0; i < n-1; i++){
        for (j = i + 1; j<n; j++)
        if (m[j] < m[i]){
            temp = m[j];
            m[j] = m[i];
            m[i] = temp;
            }
        
        printf("\n Mang o luot sap xep thu %d:", i+1);
        for (k = 0; k < n; k++)
        printf("%3d", m[k]);
    }
}

