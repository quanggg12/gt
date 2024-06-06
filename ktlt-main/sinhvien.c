#include <stdio.h>

typedef struct {
    char hoten[30], lop[5];
    float diemTDC;
} sinhvien;

int main()
{
    sinhvien sv[20],tmp;
    int n, i, j;
    float x;
    printf("Nhap so luong sinh vien(3<=n<=20):");
    scanf("%d", &n);
    
    while(n<3 || n>20)
    {
        printf("so luong sinh vien ko hop le\n");
        printf("Nhap so luong sinh vien:");
        scanf("%d", &n);
    }
    
//Nhap danh sach
    printf("-----Nhap thong tin sinh vien----- \n");
    for (i=0;i<n;i++){
        printf("Hay nhap thong tin sinh vien thu %d \n", i+1);
        printf("\nHo ten:"); fflush(stdin); gets(sv[i].hoten);
        printf("\nLop:");    fflush(stdin); gets(sv[i].lop);
        printf("\nDiem tin dai cuong:"); scanf("%f", &sv[i].diemTDC);
        }

//In ra man hinh
    printf("----Danh sach sinh vien vua nhap---- \n");
    printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
    for (i=0;i<n;i++)
    printf("\n%3d %-30s %-5s %.2f", i+1, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
    
//Sap xep theo diem thi tin dai cuong giam dan
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if (sv[i].diemTDC < sv[j].diemTDC)
    {
        tmp=sv[i];
        sv[i]=sv[j];
        sv[j]=tmp;
    }
    
  printf("\nDanh sach sinh vien sau khi sap xep:\n");
  printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
  for (i=0;i<n;i++)
  printf("\n%3d %-30s %-5s %.2fd", i+1, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
//danh sach sv co diem nho hon x  
  printf("\nNhap vao so x:");
   scanf("%d", &x);
   if (sv[i].diemTDC<x)
    {
        tmp=sv[i];
        sv[i]=sv[j];
        sv[j]=tmp;
    }
    
  printf("\nDanh sach sinh vien sau khi sap xep:\n");
  printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
  for (i=0;i<n;i++)
  printf("\n%3d %-30s %-5s %.2fd", i+1, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
  
//Tim sinh vien co diem tin dai cuong cao nhat, thap nhat
float max_diem=sv[0].diemTDC;
float min_diem=sv[0].diemTDC;
    for (i=1;i<n;i++){
    	if(max_diem<sv[i].diemTDC) max_diem=sv[i].diemTDC;
    	if(min_diem>sv[i].diemTDC) min_diem=sv[i].diemTDC;
	}  
	j=0;
	printf("\nDanh sach sinh vien co diem cao nhat la: \n");
	printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
	for (i=0;i<n;i++)
	if(sv[i].diemTDC == max_diem)
	printf("\n%3d %-30s %-5s %.2f", ++j, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
    return 0;
}
