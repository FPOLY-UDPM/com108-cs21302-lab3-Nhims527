/******************************************************************************
 * Họ và tên: [TRẦN QUỐC CƯỜNG]
 * MSSV:      [PS48626]
 * Lớp:       [CS21302-COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    int soDien;
    long tienDien;

    // Nhập số điện tiêu thụ
    printf("Nhap so dien tieu thu trong thang (kWh): ");
    scanf("%d", &soDien);

    if (soDien < 0) {
        printf("So dien khong hop le!\n");
    } else {
        tienDien = soDien * 3000;
        printf("So tien dien phai dong la: %ld VND\n", tienDien);
    }

    return 0;
}
