#include <stdio.h>
#include <math.h>

typedef struct 
{
	int x, y, z;
} diem;

void nhap(diem *N)
{
	printf("Nhap toa do cua diem %c", N);
	printf("Toa do x:"); scanf("%d", &N.x);
	printf("Toa do y:"); scanf("%d", &N.y);
	printf("Toa do z:"); scanf("%d", &N.z);
}
float tinhkhoangcach(diem x, diem y)
{
	float kc;
	kc=sqrt((pow(x.x-y.x),2)+pow((x.y-y.y), 2)+pow((x.z-y.z), 2));
   return kc;	
}

int main()
{
	diem A, B;
	nhap(A);
	nhap(B);
	printf("Khoang cach giua A va B la:%f", float(tinhkhoangcach(A, B)));
	return 0;
}
