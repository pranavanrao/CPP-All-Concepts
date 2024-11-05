#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    virtual ~Shape() = default;

    virtual double area() const = 0;

    virtual string type() const = 0;
};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : m_width(width), m_height(height)
    {
    }

    double area() const override
    {
        return m_width * m_height;
    }

    string type() const override
    {
        return "Rectangle";
    }

private:
    double m_width;
    double m_height;
};

class Circle : public Shape
{
private:
    double m_radius;

public:
    Circle(double radius) : m_radius(radius)
    {
    }

    double area() const override
    {
        return 3.14 * m_radius * m_radius;
    }

    string type() const override
    {
        return "Circle";
    }
};

void printShapeInfo(const Shape &shape)
{
    cout << "Shape : " << shape.type() << endl;
    cout << "Area  : " << shape.area() << endl;
}

int main()
{
    Rectangle rect(5.0, 4.0);
    Circle circle(10.0);

    printShapeInfo(rect);
    printShapeInfo(circle);

    return 0;
}