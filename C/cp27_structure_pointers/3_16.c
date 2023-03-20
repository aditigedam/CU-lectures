#include <stdio.h>
struct rectangle {
    int width;
    int height;
};
int main() {
    struct rectangle rect1, rect2;
    int area1, area2;
    scanf("%d %d", &rect1.width, &rect1.height);
    scanf("%d %d", &rect2.width, &rect2.height);
    area1 = rect1.width * rect1.height;
    area2 = rect2.width * rect2.height;
    printf("%d\n",area1);
    printf("%d",area2);
    return 0;
}
