#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("nhap so thu nhat: ");
    scanf("%d", &s1);
    
    printf("nhap so thu hai: ");
    scanf("%d", &s2);
    
    printf("nhap so thu ba: ");
    scanf("%d", &s3);
    
    if ((s3 > s1 && s3 < s2) || (s3 > s2 && s3 < s1)) {
        printf("so thu ba (%d) trong khoang giua %d va %d.\n", s3, s1, s2);
    } else {
        printf("so thu ba (%d) khong trong khoang giua %d va %d.\n", s3, s1, s2);
    }
    return 0;
}
