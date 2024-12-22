#include <stdio.h>
#include <string.h>

// �?nh nghia c?u tr�c SinhVien
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

// H�m s?p x?p sinh vi�n theo t�n
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

// H�m hi?n th? danh s�ch sinh vi�n
void hienThiDanhSach(SinhVien arr[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }
}

int main() {
    // Khai b�o m?ng sinh vi�n v� s? lu?ng sinh vi�n
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

    // Hi?n th? danh s�ch ban d?u
    printf("Danh sach sinh vien ban dau:\n");
    hienThiDanhSach(sv, soLuong);

    // S?p x?p sinh vi�n theo t�n
    sapXepSinhVienTheoTen(sv, soLuong);

    // Hi?n th? danh s�ch sau khi s?p x?p
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    hienThiDanhSach(sv, soLuong);

    return 0;
}

