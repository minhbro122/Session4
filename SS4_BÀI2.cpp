#include <stdio.h>

int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d l� so chan\n", n);
    } else {
        printf("%d l� so le\n", n);
    }

    return 0;
}
