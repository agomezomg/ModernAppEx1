#include "Shape.h"

Shape::~Shape() {}

Shape* Shape::Create(ShapeType type) {
    if (type == Circle_type) {
        return new Circle();
    } else if (type == Square_type) {
        return new Square();
    } else if (type == Triangle_type) {
        return new Triangle();
    }
    return NULL;
}