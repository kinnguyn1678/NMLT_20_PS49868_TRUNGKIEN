#include <stdio.h>

int main() {
    char mssv[20];
    char hoTen[100];
    int namSinh;
    float diemTB;

    // Nhap du lieu
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap ho va ten: ");
    scanf(" %[^\n]", hoTen); // doc chuoi co khoang trang

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Tinh tuoi
    int tuoi = 2026 - namSinh;

    // Xuat du lieu
    printf("\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", diemTB);

    return 0;
}
