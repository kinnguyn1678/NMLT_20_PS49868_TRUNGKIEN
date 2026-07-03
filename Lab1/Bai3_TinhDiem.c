#include <stdio.h>

int main() {
    char mssv[20];
    char hoTen[100];
    float diemToan, diemLy, diemHoa;
    float diemTB;

    // Nhap du lieu
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap ho va ten: ");
    scanf(" %[^\n]", hoTen); // doc chuoi co khoang trang

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);

    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // Tinh diem trung binh (Toan he so 2)
    diemTB = (diemToan * 2 + diemLy + diemHoa) / 4;

    // Xuat du lieu
    printf("\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTB);

    return 0;
}
