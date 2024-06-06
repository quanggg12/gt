#include <stdio.h>

void main()
{
    int i,j,n,k;
    printf("Hay nhap chieu cao:");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i=1;i<=n;i++){
        for (k=n;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i=1;i<=n;i++){
        for (k=n;k>=i;k--){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i=1;i<=n;i++){
        for (k=n;k>i;k--){
            printf(" ");
        }
        for (j=1;j<2*i;j++){
            printf("*");
        }
        printf("\n");
    }
}