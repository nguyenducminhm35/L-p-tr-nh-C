#include <stdio.h>

int main() {
    char  student[5][150];
    int i;
    printf("Nh?p tên h?c sinh vào b?ng danh sách sau:\n");
    for (i=0; i<5; i++) {
        printf("\nTên h?c sinh s? %d là:", i+1);
        scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n H?c sinh s? %d là %s", i+1, student[i]);
    }
    printf("\n");
}

