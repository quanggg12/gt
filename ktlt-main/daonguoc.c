#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int rem,reverse=0;
    printf("Hay nhap chu so:");
    scanf("%d", &n);

while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("So sau khi dao nguoc la: %d", reverse);
}
