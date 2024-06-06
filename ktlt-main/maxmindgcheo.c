#include <stdio.h>

int main()
{
    int A[100][100],B[100][100],C[100][100];
    int m, n,i,j;
    printf("Nhap kich thuoc mang mxn=\n");scanf("%d",&m);scanf("%d",&n);
    printf("Nhap ma tran A\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d]=", i,j);scanf("%d", &A[i][j]);
        }
    }
    printf("Nhap ma tran B\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("B[%d][%d]=", i,j);scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("Ma tran A la:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("%5d", A[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran B la:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("%5d", B[i][j]);
        }
        printf("\n");
    }
    
    printf("Ket qua tru 2 ma tran la:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("%5d", C[i][j]);
        }
        printf("\n");
    }
    int max,min;
    max=C[0][0];
    min=C[0][0];
    for(i=0,j=0;i<m,j<n;i++,j++){
        if(C[i][j]>max)
            max=C[i][j];
    }
    for(i=0,j=0;i<m,j<n;i++,j++){
        if(C[i][j]<min)
            min=C[i][j];
    }
    printf("max duong cheo chinh la: %d\n" , max);
    printf("min duong cheo chinh la: %d\n" , min);
    
}

