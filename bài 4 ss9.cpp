#include <stdio.h>
#define max 100
int main() {
    int mang[max], so_phan_tu = 0, lua_chon;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        if (lua_chon == 1) { // Nhap mang
            printf("Nhap so phan tu: ");
            scanf("%d", &so_phan_tu);
            for (int i = 0; i < so_phan_tu; i++) {
                printf("Nhap phan tu thu %d: ", i + 1);
                scanf("%d", &mang[i]);
            }
        } else if (lua_chon == 2) { // Hien thi mang
            printf("Cac phan tu trong mang: ");
            for (int i = 0; i < so_phan_tu; i++) {
                printf("%d ", mang[i]);
            }
            printf("\n");
        } else if (lua_chon == 3) { // Them phan tu
            int gia_tri, vi_tri;
            printf("Nhap gia tri va vi tri can them: ");
            scanf("%d%d", &gia_tri, &vi_tri);
            for (int i = so_phan_tu; i > vi_tri; i--) {
                mang[i] = mang[i - 1];
            }
            mang[vi_tri] = gia_tri;
            so_phan_tu++;
        } else if (lua_chon == 4) { // Sua phan tu
            int vi_tri, gia_tri_moi;
            printf("Nhap vi tri va gia tri moi: ");
            scanf("%d%d", &vi_tri, &gia_tri_moi);
            mang[vi_tri] = gia_tri_moi;
        } else if (lua_chon == 5) { // Xoa phan tu
            int vi_tri;
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &vi_tri);
            for (int i = vi_tri; i < so_phan_tu - 1; i++) {
                mang[i] = mang[i + 1];
            }
            so_phan_tu--;
        } else if (lua_chon == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le!\n");
        }
    } while (lua_chon != 6);

    return 0;
}

