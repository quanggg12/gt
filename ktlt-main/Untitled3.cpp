#include <stdio.h>
int main(){

int m[10];
    int n, i, k, j, t;
    printf("So phan tu cua mang:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("a[%d]=", i+1);
        scanf("%d", &m[i]);
    }
    for (j=i;j<n;j++)
    if(m[j] % 2 != 0){
        k=m[i];
        m[i]=m[j];
        m[j]=t;

    }
   for (i=0;i<n;i++)
   printf("%3d", m[i]);
    return 0;
}
