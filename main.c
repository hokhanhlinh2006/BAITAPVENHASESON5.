#include<stdio.h>
int main(){
    int i;
    int n;
    int sum=0;
    printf("Ban hay nhap so nguyen duong ");
    scanf("%d", &n);
    if (n <=0) {
        printf("Ban nhap sai roi");
    }
    for (i = 0; i <= n; i++){
        sum += i;
    }
    printf("Tong %d la %d", n,sum);
    return 0;
}



