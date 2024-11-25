#include <stdio.h>
int main() {
    int target = 62;
    int user_input;
    printf("Nhap so trung voi %d de ket thuc bai.\n", target);

    do {
        printf("Hay nhap so: ");
        scanf("%d", &user_input);
        
        if (user_input != target) {
            printf("Ban nhap chua dung , hay thu lai.\n");
        }
    } while (user_input != target);

 
    printf("Chuc mung! Ban da nhap dung so %d.\n", target);

    return 0;
}

