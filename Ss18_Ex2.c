#include <stdio.h>

struct student {
    char name[50];
    int age;
    char phone[15];
};

int main() {
    struct student user01;

    printf("Nhap ten: ");
    fgets(user01.name, sizeof(user01.name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &user01.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", user01.phone);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", user01.name);
    printf("Tuoi: %d\n", user01.age);
    printf("So dien thoai: %s\n", user01.phone);

    return 0;
}

