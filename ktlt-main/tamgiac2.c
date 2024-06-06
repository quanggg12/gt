#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    triangle(n);
    distance();
    inverted_triangle(n);
    distance();
    right_triangle(n);
    distance();
    inverted_rtriangle(n);
    return 0;
}

void distance()
{
    printf("--------------------------");
    printf("\n");
}

void triangle(int n)
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void inverted_triangle(int n)
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void right_triangle(int n)
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j<=n-i)
                printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

void inverted_rtriangle(int n)
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j<i)
                printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
