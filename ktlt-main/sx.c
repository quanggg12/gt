//số lẻ về đầu, số chẵn về cuối
int main()
{
    int a[100];
    int b[100];
    int c[100];
    int i,j,k,n,z,h,t;
    printf("Nhap so phan tu cua mang:"); 
    scanf("%d", &n);
    printf("Nhap gia tri cua mang: \n");
    for(i=0; i<n; i++){
        printf("c[%d]=", i+1);scanf("%d", &c[i]);}
    j=0;
    for(i=0; i<n; i++){
        if(c[i]%2==1){
            a[j]=c[i];
            j++;
            k=j;
            }
        }
    z=0;
    for(i=0; i<n; i++){
        if(c[i]%2==0){
            b[z]=c[i];
            z++;
            h=z;
            }
        }
    printf("Mang sau khi sap xep la:\n");
    for(j=0;j<k;j++){
        printf("%d ", a[j]);
    }
    for(z=0;z<h;z++){
        printf("%d ", b[z]);
    }
