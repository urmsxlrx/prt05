class Rectangle
{
public:
    Rectangle(double length, double width);
    double perimeter();
    double area();
    double diagonal();
    ~Rectangle();
private:
    double length;
    double width;
};
