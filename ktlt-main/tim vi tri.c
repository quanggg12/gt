#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],C[10][10];
    int m, n,i,j,k,f;
    printf("Nhap hang ma tran:");
	scanf("%d",&m);
	printf("Nhap cot cua ma tran:");
	scanf("%d",&n);
    printf("Nhap ma tran A:");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\nA[%d][%d]=", i+1,j+1);
			scanf("%d", &A[i][j]);
        }
    }
    printf("Nhap ma tran B:");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\nB[%d][%d]=", i+1,j+1);
			scanf("%d", &B[i][j]);
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
            printf ("%d\t ", A[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran B la:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("%d\t ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("Ma tran C la:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("%d\t ", C[i][j]);
        }
        printf("\n");
    }
    printf("Nhap vao gia tri k can tim kiem:");scanf("%d", &k);
	check = True;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if (A[i][j]==k){
            	check = False;
                printf ("Vi tri cua phan tu co gia tri = %d la A[%d][%d]\n", k,i+1,j+1);}
		if (B[i][j]==k){
			check = False;
		        printf ("Vi tri cua phan tu co gia tri = %d la B[%d][%d]\n", k,i+1,j+1);}
		if (C[i][j]==k){
			check = False;
                printf ("Vi tri cua phan tu co gia tri = %d la C[%d][%d]\n", k,i+1,j+1);}
        }
    }
    if (check==True)    
		printf("Khong tim thay");
return 0;    
}

