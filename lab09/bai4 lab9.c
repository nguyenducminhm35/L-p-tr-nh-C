#include <stdio.h>

int main() {
    char  student[5][150];
    int i;
    printf("Nh?p t�n h?c sinh v�o b?ng danh s�ch sau:\n");
    for (i=0; i<5; i++) {
        printf("\nT�n h?c sinh s? %d l�:", i+1);
        scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n H?c sinh s? %d l� %s", i+1, student[i]);
    }
    printf("\n");
}

