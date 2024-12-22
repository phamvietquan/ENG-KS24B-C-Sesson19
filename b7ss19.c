#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

typedef struct SinhVien sinhVien;

void delate(int id, sinhVien sv[], int *n);
void hienThiDanhSach(sinhVien sv[], int n);

int main() {
    sinhVien sv[5] = {
        {1, "Pham Viet a", 18, "0332200001"},
        {2, "Pham Viet b", 19, "0332200002"},
        {3, "Pham Viet c", 20, "0332200003"},
        {4, "Pham Viet d", 21, "0332200004"},
        {5, "Pham Viet e", 22, "0332200005"},
    };
    int n = 5;
	int id;
    printf("Danh sach sinh vien ban dau:\n");
    hienThiDanhSach(sv, n);
	printf("Moi ban nhap vao id sinh vien muon xoa");
	scanf("%d", &id);
    delate(id, sv, &n);
    printf("\nDanh sach sinh vien la:\n");
    hienThiDanhSach(sv, n);

    return 0;
}

void delate(int id, sinhVien sv[], int *n) {
    int found = 0; 
    for (int i = 0; i < *n; i++) {
        if (sv[i].id == id) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                sv[j] = sv[j + 1];
            }
            (*n)--; 
            printf("\nSinh vien co ID %d da duoc xoa.\n", id);
            break;
        }
    }
    if (!found) {
        printf("\nKhong tim thay sinh vien co ID %d trong danh sach.\n", id);
    }
}

void hienThiDanhSach(sinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d Name: %s Age: %d Phone: %s\n",
               sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }
}

