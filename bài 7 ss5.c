#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
    }
    return a;
}
    int main() {
    int num1, num2;

    printf("Ban hay nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Ban hay nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

   if (num1 <= 0 || num2 <= 0) {
        printf("hay nhap vao hai so nguyen duong!\n");
        return 1;  // Thoát chương trình nếu có số không hợp lệ
    }
    int result = ucln(num1, num2);
    printf("Uoc chung lon nhat cua %d và %d la: %d\n", num1, num2, result);

    return 0;
}

