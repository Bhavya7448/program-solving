#include <stdio.h>
int main() {
    struct {
        int a;
    } s;

    s.a = 10;
    printf("%d", s.a);
}
