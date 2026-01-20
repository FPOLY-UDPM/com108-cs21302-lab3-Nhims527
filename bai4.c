/******************************************************************************
 * Họ và tên: [TRẦN QUỐC CƯỜNG]
 * MSSV:      [PS48626]
 * Lớp:       [CS21302-COM108]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main() {
    int chon;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh (bac 1 & bac 2)\n");
        printf("3. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: {   // BÀI 1: TÍNH HỌC LỰC
                float diem;
                printf("Nhap diem (0-10): ");
                scanf("%f", &diem);

                if (diem < 0 || diem > 10)
                    printf("Diem khong hop le!\n");
                else if (diem >= 9)
                    printf("Hoc luc: Xuat sac\n");
                else if (diem >= 8)
                    printf("Hoc luc: Gioi\n");
                else if (diem >= 6.5)
                    printf("Hoc luc: Kha\n");
                else if (diem >= 5)
                    printf("Hoc luc: Trung binh\n");
                else if (diem >= 3.5)
                    printf("Hoc luc: Yeu\n");
                else
                    printf("Hoc luc: Kem\n");
                break;
            }

            case 2: {   // BÀI 2: GIẢI PHƯƠNG TRÌNH
                float a, b, c, delta;
                printf("Nhap a, b, c: ");
                scanf("%f %f %f", &a, &b, &c);

                if (a == 0) {   // Bậc 1
                    if (b == 0) {
                        if (c == 0)
                            printf("Phuong trinh co vo so nghiem\n");
                        else
                            printf("Phuong trinh vo nghiem\n");
                    } else {
                        printf("Nghiem x = %.2f\n", -c / b);
                    }
                } else {        // Bậc 2
                    delta = b*b - 4*a*c;
                    if (delta < 0)
                        printf("Phuong trinh vo nghiem\n");
                    else if (delta == 0)
                        printf("Nghiem kep x = %.2f\n", -b / (2*a));
                    else {
                        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2*a));
                        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2*a));
                    }
                }
                break;
            }

            case 3: {   // BÀI 3: TÍNH TIỀN ĐIỆN
                int soDien;
                long tien;
                printf("Nhap so dien tieu thu (kWh): ");
                scanf("%d", &soDien);

                if (soDien < 0)
                    printf("So dien khong hop le!\n");
                else {
                    tien = soDien * 3000;
                    printf("Tien dien phai dong: %ld VND\n", tien);
                }
                break;
            }

            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (chon != 0);

    return 0;
}
