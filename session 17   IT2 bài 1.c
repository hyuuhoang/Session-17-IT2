#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);


    *arr = (int *)malloc(*n * sizeof(int));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        exit(1);
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void hienThiMang(int *arr, int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int tinhDoDaiMang(int n) {
    return n;
}

int tinhTongMang(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int timMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int *arr = NULL;
    int n = 0; 
    int choice;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            nhapMang(&arr, &n);
            break;
        case 2:
            if (n > 0)
                hienThiMang(arr, n);
            else
                printf("Mang chua co phan tu nao. Vui long nhap mang truoc!\n");
            break;
        case 3:
            printf("Do dai cua mang la: %d\n", tinhDoDaiMang(n));
            break;
        case 4:
            if (n > 0)
                printf("Tong cac phan tu trong mang la: %d\n", tinhTongMang(arr, n));
            else
                printf("Mang chua co phan tu nao. Vui long nhap mang truoc!\n");
            break;
        case 5:
            if (n > 0)
                printf("Phan tu lon nhat trong mang la: %d\n", timMax(arr, n));
            else
                printf("Mang chua co phan tu nao. Vui long nhap mang truoc!\n");
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 6);

    // Gi?i ph�ng b? nh? �?ng
   

