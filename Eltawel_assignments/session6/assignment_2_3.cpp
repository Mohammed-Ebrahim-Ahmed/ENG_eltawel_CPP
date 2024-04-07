#include <iostream>

class Shape {

    public:
        std::string getName()
        {
            return name;
        }

        virtual float calculateArea() = 0;
    protected:
        std::string name;
};

class Rectangle : public Shape {

    Rectangle(float l, float w): length(l), width(w){}
    float calculateArea()
    {
        return length*width;
    }

    private:
        float length;
        float width;
};

class Circle : public Shape {
    Circle(float r) : radius{r} {}
    float calculateArea()
    {
        return 3.14 * radius*radius;
    }
    private:
        float radius;
};

class Triangle : public Shape {

    public:
        Triangle(float b, float h) : base{b}, height{h} {}

        float calculateArea(){
            return (0.5 * base *height);
        }
    private:
        float base;
        float height;
};

class ThreeDimensionalShape : public Shape{
    public:
        virtual float calculateVolume() = 0;

};

class Sphere : public ThreeDimensionalShape {

    public:
        float calculateArea()
        {
            return 4*3.14* radius;
        }
        float calculateVolume()
        {
            return (4/3)*3.14*radius*radius*radius;
        }
    private:
        float radius;
};