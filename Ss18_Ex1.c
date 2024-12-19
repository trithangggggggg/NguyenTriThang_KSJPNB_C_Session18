#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int age;
        char phone[15];
    };

    struct Student user01;

    sprintf(user01.name, "Nguyen Tri Thang");
    user01.age = 18;
    sprintf(user01.phone, "09999999");

    printf("Name: %s\n", user01.name);
    printf("Age: %d\n", user01.age);
    printf("Phone: %s\n", user01.phone);

    return 0;
}

