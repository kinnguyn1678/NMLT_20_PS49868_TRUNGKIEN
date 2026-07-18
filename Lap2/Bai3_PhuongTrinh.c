#include <stdio.h>

int main() {
    float a, b, x;

    printf("===== GIAI PHUONG TRINH BAC NHAT ax + b = 0 =====\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Gia dinh a luon khac 0
    x = -b / a;

    printf("Phuong trinh: %.2fx + %.2f = 0\n", a, b);
    printf("Nghiem x = %.2f\n", x);

    return 0;
}