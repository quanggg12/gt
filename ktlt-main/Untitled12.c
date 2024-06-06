#include <stdio.h>

float min = x[1] * x[2] * x[3];
int minIndex = 1;
for(i = 2; i <= n-2; i++) {
    float temp = x[i] * x[i+1] * x[i+2];
    if (min < temp) {
        min = temp;
        minIndex = i;
    }
}
printf("bo 3 phan tu co tich nho nhat la %f %f %f\n",x[minIndex],x[minIndex+1],x[minIndex+2]);
printf("Tich nho nhat la %f",min);
