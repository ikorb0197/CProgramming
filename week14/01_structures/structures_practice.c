#include <stdio.h>

struct Rectangle {
    double width;
    double height;
};

struct Rectangle createRectangle(double width, double height);
double getPerimeter(struct Rectangle *rect);

int main(void) {
    struct Rectangle r = createRectangle(2.5, 3.7);
    printf("%lf\n", getPerimeter(&r));
    
    return 0;
}

struct Rectangle createRectangle(double width, double height) {
    struct Rectangle rect;
    rect.width = width;
    rect.height = height;
    return rect;
}

double getPerimeter(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}