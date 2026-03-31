#include <stdio.h>

struct Point {
    int x, y;
};

struct Point add(struct Point p1, struct Point p2) {
    struct Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}

int main() {
    struct Point p1 = {2,3}, p2 = {4,5}, p3;
    p3 = add(p1, p2);

    printf("%d %d", p3.x, p3.y);
    return 0;
}
