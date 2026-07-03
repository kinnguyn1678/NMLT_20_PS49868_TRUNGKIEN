#include <stdio.h>

int main() {
    char mssv[30];
    char hoten[100];
    int namsinh;
    int tuoi;
    float dtb;

    printf("Nhap MSSV: ");
    fgets(mssv, sizeof(mssv), stdin);

    printf("Nhap Ho Va Ten: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap Nam Sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap Diem Trung Binh: ");
    scanf("%f", &dtb);

    tuoi = 2026 - namsinh;

    printf("\nMa so sinh vien: %s", mssv);
    printf("Ho Va Ten: %s", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}