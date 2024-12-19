#include <stdio.h>

struct student {
    char name[50];
    int age;
    char phone[15];
};

int main() {
    struct student user01[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(user01[i].name, sizeof(user01[i].name), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &user01[i].age);

        printf("Nhap so dien thoai: ");
        scanf("%s", user01[i].phone);
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s", user01[i].name);
        printf("Tuoi: %d\n", user01[i].age);
        printf("So dien thoai: %s\n", user01[i].phone);
        printf("\n");
    }

    return 0;
}

