#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int age;
    char phone[15];
};

int main() {
    struct student students[50];
    int n = 5;

    printf("Nhap thong tin cho %d sinh vien:\n", n);

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;

        printf("Nhap ten sinh vien thu %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        fflush(stdin);

        printf("Nhap so dien thoai: ");
        scanf("%s", students[i].phone);
        fflush(stdin);
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phone);
    }

    return 0;
}

