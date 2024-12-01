#include <stdio.h>
#define max 100

int main() {
    int mang[max], so_phan_tu = 0, lua_chon;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. Nhap vao mot so va thong ke trong mang\n");
        printf("6. Them mot phan tu vao vi tri chi dinh\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        if (lua_chon == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &so_phan_tu);
            for (int i = 0; i < so_phan_tu; i++) {
                printf("Nhap phan tu thu %d: ", i + 1);
                scanf("%d", &mang[i]);
            }
        } else if (lua_chon == 2) {
            printf("Cac phan tu trong mang: ");
            for (int i = 0; i < so_phan_tu; i++) {
                printf("%d ", mang[i]);
            }
            printf("\n");
        } else if (lua_chon == 3) {
            int tong = 0;
            printf("Cac phan tu chan: ");
            for (int i = 0; i < so_phan_tu; i++) {
                if (mang[i] % 2 == 0) {
                    printf("%d ", mang[i]);
                    tong += mang[i];
                }
            }
            printf("\nTong cac phan tu chan: %d\n", tong);
        } else if (lua_chon == 4) {
            if (so_phan_tu > 0) {
                int lon_nhat = mang[0], nho_nhat = mang[0];
                for (int i = 1; i < so_phan_tu; i++) {
                    if (mang[i] > lon_nhat) lon_nhat = mang[i];
                    if (mang[i] < nho_nhat) nho_nhat = mang[i];
                }
                printf("Gia tri lon nhat: %d\n", lon_nhat);
                printf("Gia tri nho nhat: %d\n", nho_nhat);
            } else {
                printf("Mang rong!\n");
            }
        } else if (lua_chon == 5) {
            int x, dem = 0;
            printf("Nhap vao mot so: ");
            scanf("%d", &x);
            for (int i = 0; i < so_phan_tu; i++) {
                if (mang[i] == x) dem++;
            }
            printf("So phan tu co gia tri %d trong mang: %d\n", x, dem);
        } else if (lua_chon == 6) {
            int gia_tri, vi_tri;
            printf("Nhap gia tri va vi tri can them: ");
            scanf("%d%d", &gia_tri, &vi_tri);
            if (vi_tri >= 0 && vi_tri <= so_phan_tu && so_phan_tu < max) {
                for (int i = so_phan_tu; i > vi_tri; i--) {
                    mang[i] = mang[i - 1];
                }
                mang[vi_tri] = gia_tri;
                so_phan_tu++;
                printf("Them thanh cong!\n");
            } else {
                printf("Vi tri khong hop le!\n");
            }
        } else if (lua_chon == 7) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le!\n");
        }
    } while (lua_chon != 7);

    return 0;
}

