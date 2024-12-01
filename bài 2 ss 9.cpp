#include <stdio.h>

int main() {
    int mang[100], so_phan_tu, vi_tri, gia_tri_moi;

    printf("Nhap so phan tu: ");
    scanf("%d", &so_phan_tu);
    for (int i = 0; i < so_phan_tu; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap vi tri va gia tri moi: ");
    scanf("%d%d", &vi_tri, &gia_tri_moi);
    mang[vi_tri] = gia_tri_moi;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < so_phan_tu; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

