#include<stdio.h>
int main(void){
    int number;
    int i;
    int tich;
    printf("Ban can xem bang cuu chuong nao ");
    scanf("%d", &number);
    for(i = 1; i <= 10; i++){
        tich= number * i;
        printf("%d * %d = %d\n", number ,i, tich);
    }
    return 0;
}


