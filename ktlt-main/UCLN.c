#include <stdio.h>

int UCLN(int a, int b)
{
	if(b==0)
	return 0;
	int c=a%b;
	return UCLN(b,c);
}
int main()
{
	int a, b;
	printf("Nhap a:"); scanf("%d", &a);
	pritnf("Nhap b:"); scanf("%d", &b);
	int c=UCLN(a,b);
	printf("UCLN la: %d", c);
	return 0;
}
