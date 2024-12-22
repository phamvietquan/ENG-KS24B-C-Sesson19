#include <stdio.h>
#include <string.h>

// Ð?nh nghia c?u trúc SinhVien
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

// Hàm s?p x?p sinh viên theo tên
void sapXepSinhVienTheoTen(SinhVien arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                SinhVien temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm hi?n th? danh sách sinh viên
void hienThiDanhSach(SinhVien arr[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }
}

int main() {
    // Khai báo m?ng sinh viên và s? lu?ng sinh viên
    SinhVien sv[5] = {
        {
		1, "Pham Viet addfhd", 18, "0332200001"
	}, 
	{
		2, "Pham Viet bddgdgdddg", 19, "0332200002"
	},
	{
		3, "Pham Viet dgdgdyc", 20, "0332200003"
	},
	{
		4, "Pham Viet ddtyf", 21, "0332200004"
	},
	{
		5, "Pham Viet fdhrhntyrtre", 22, "0332200005"
	},
    };
    int soLuong = 5;

    // Hi?n th? danh sách ban d?u
    printf("Danh sach sinh vien ban dau:\n");
    hienThiDanhSach(sv, soLuong);

    // S?p x?p sinh viên theo tên
    sapXepSinhVienTheoTen(sv, soLuong);

    // Hi?n th? danh sách sau khi s?p x?p
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    hienThiDanhSach(sv, soLuong);

    return 0;
}

