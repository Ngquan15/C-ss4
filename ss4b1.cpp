#include <stdio.h>

int main() {
    int number;
    
    printf("nhap mot so nguyen: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf(" %d la so duong.\n", number);
    } else if (number < 0) {
        printf(" %d la so am.\n", number);
    } else {
        printf("so ban nhap la 0.\n");
    }
    
    return 0;
}