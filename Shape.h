#pragma once
#include <iostream>
#include <string>
#define PI	3.14159265359;

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum ShapeType {
    Circle_type, Square_type, Triangle_type
};

class Shape {
    public:
        virtual ~Shape();
        virtual double calcArea() = 0;
        virtual string toString() = 0;
        static Shape* Create(ShapeType type);
};

class Circle : public Shape {
	public:
        double calcArea() {
			double radius = 1.0;
			cout << "Radius: ";
			cin >> radius;
			double retval = PI;
			retval *= radius;
            cout << "Area is: ";
			return retval;
		};
		string toString() {
			return "I am a circle.\n";
		};
};

class Square : public Shape {
    public:
        double calcArea() {
            double dimension = 1.0;
            cout << "Dimension: ";
            cin >> dimension;
            cout << "Area is: ";
            return dimension * dimension;
        };

        string toString() {
            return  "I am a Square.\n";
        }
};

class Triangle : public Shape {
    public:
        double calcArea() {
            double base = 1.0;
            double height = 1.0;
            cout << "Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height;
            cout << "Area is: ";
            return base * height * 0.5;
        };

        string toString() {
            return  "I am a Triangle.\n";
        }
};