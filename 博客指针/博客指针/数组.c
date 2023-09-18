#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Point {
    int x;
    int y;
};

void updatePoint(struct Point* ptr) {
    ptr->x = 10;
    ptr->y = 20;
}

int main() {
    struct Point p;
    struct Point* ptr = &p;

    updatePoint(ptr);

    printf("Updated Point: (%d, %d)\n", p.x, p.y);

    return 0;
}


