#include <stdio.h>

int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d là so chan\n", n);
    } else {
        printf("%d là so le\n", n);
    }

    return 0;
}
