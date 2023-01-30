#include <stdio.h>
int a;
int main () {
    a = 50;
    b = *a;
    printf("nilai a:%i", &a);
    printf("nilai b:%i", b);

    return 0;
}