#include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap a = ");
    scanf("%f", &a);

    printf("Nhap b = ");
    scanf("%f", &b);

    x = -b / a;

    printf("Phuong trinh %.0fx + %.0f = 0 co nghiem x = %.2f\n", a, b, x);

    return 0;
}