#include <stdio.h>

int main() {
    char mssv[30];
    char hoten[100];
    float toan, ly, hoa, dtb;

    printf("Nhap MSSV: ");
    fgets(mssv, sizeof(mssv), stdin);

    printf("Nhap Ho Va Ten: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap Diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap Diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap Diem Hoa: ");
    scanf("%f", &hoa);

    dtb = (toan * 2 + ly + hoa) / 4;

    printf("\nMa so sinh vien: %s", mssv);
    printf("Ho Va Ten: %s", hoten);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}