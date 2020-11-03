#include <stdio.h>

int main() {
    int intArr[5];
    float floatArr[10];
    int i;
    for (i=0; i<5; i++) {
        scanf("%d", &intArr[i]);
    }
    floatArr[i]=0;
    for (i=0; i<5; i++) {
        floatArr[i]=intArr[i];
        printf("%d\t", intArr[i]);
    }
    for (i=5; i<10; i++) {
        floatArr[i]=0;
        printf("%f\t", floatArr[i]);
    }
    printf("\n");
}
