#include <stdio.h>

int main() {
    int mang[100], so_phan_tu, gia_tri, vi_tri;

    printf("Nhap so phan tu: ");
    scanf("%d", &so_phan_tu);
    for (int i = 0; i < so_phan_tu; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri va vi tri can them: ");
    scanf("%d%d", &gia_tri, &vi_tri);
    for (int i = so_phan_tu; i > vi_tri; i--) {
        mang[i] = mang[i - 1];
    }
    mang[vi_tri] = gia_tri;
    so_phan_tu++;

    printf("Mang sau khi chen: ");
    for (int i = 0; i < so_phan_tu; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

