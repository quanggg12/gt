#include <stdio.h>

typedef struct{
	char mathang[10], mahang[10], tenhang[10];
	int soluong, dongia;
} hanghoa;

int main()
{
	hanghoa hh[100], tmp;
	int n, i, j;
	printf("Nhap so luong hang hoa(0<n<=100):");
	scanf("%d", &n);
	while (n<0 || n>100){
		printf("Vui long nhap lai\n");
		printf("\nNhap lai so luong hang hoa(0<n<=100):");
		scanf("%d", &n);
	}
	printf("---Nhap thong tin hang hoa---\n");
	for (i=0;i<n;i++){
		printf("Hay nhap thong tin hang hoa thu %d\n", i+1);
		printf("\nMat hang:"); fflush(stdin); gets(hh[i].mathang);
		printf("\nMa hang:");  fflush(stdin); gets(hh[i].mahang);
		printf("\nTen hang:"); fflush(stdin); gets(hh[i].tenhang);
		printf("\nSo luong:"); scanf("%d", &hh[i].soluong);
		printf("\nDon gia:"); scanf("%d", &hh[i].dongia);
	}
	printf("Danh sach hang hoa vua nhap\n");
    printf("%3s %-30s %-30s %-30s %-10s %-10s", "STT", "Mat hang", "Ma hang", "Ten hang", "So luong", "Don gia");
    for (i=0;i<n;i++)
    printf("\n%3d %-30s %-30s %-30s %-10d %-10d", i+1, hh[i].mathang, hh[i].mahang, hh[i].tenhang, hh[i].soluong, hh[i].dongia);
    
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if (hh[i].dongia > hh[j].dongia)
    {
        tmp=hh[i];
        hh[i]=hh[j];
        hh[j]=tmp;
    }
    printf("\nDanh sach hang hoa sau khi sap xep\n");
    printf("%3s %-30s %-30s %-30s %-10s %-10s", "STT", "Mat hang", "Ma hang", "Ten hang", "So luong", "Don gia");
    for (i=0;i<n;i++)
    printf("\n%3d %-30s %-30s %-30s %-10d %-10d", i+1, hh[i].mathang, hh[i].mahang, hh[i].tenhang, hh[i].soluong, hh[i].dongia);
    return 0;
}
