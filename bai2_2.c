/******************************************************************************
 * Họ và tên: [TRẦN QUỐC CƯỜNG]
 * MSSV:      [PS48626]
 * Lớp:       [CS21302-COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Nhập dữ liệu
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Trường hợp a = 0 (PT bậc 1)
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            float x = -c / b;
            printf("Phuong trinh co nghiem: x = %.2f\n", x);
        }
    }
    // Trường hợp a ≠ 0 (PT bậc 2)
    else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
