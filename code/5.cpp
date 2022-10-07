#include <iostream>
class Point {

public:
    void SetX(int x) { itsX = x; }
    void SetY(int y) { itsY = y; }
    int GetX() { return itsX; }
    int GetY() { return itsY; }
private:
    int itsX;
    int itsY;
}; 
class Rectangle {
public:
    Rectangle(int top, int left, int bottom, int right);
    ~Rectangle() {}
    int GetTop() const { return itsTop; }
    int GetLeft() const { return itsLeft; }
    int GetBottom() const { return itsBottom; }
    int GetRight() const { return itsRight; }
    int GetArea() const;
    Point GetUpperLeft() const { return itsUpperLeft; }
    Point GetUpperRight() const { return itsUpperRight; }
    Point GetLowerLeft() const { return itsLowerLeft; }
    Point GetLowerRight() const { return itsLowerRight; }
    void SetUpperLeft(Point location) { itsUpperLeft = location; }
    void SetUpperRight(Point location) { itsUpperRight = location; }
    void SetLowerLeft(Point location) { itsLowerLeft = location; }
    void SetLowerRight(Point location) { itsLowerRight = location; }
    void SetTop(int top) { itsTop = top; }
    void SetLeft(int top) { itsLeft = top; }
    void SetBottom(int top) { itsBottom = top; }
    void SetRight(int top) { itsRight = top; }
private:
    Point itsUpperLeft;
    Point itsUpperRight;
    Point itsLowerLeft;
    Point itsLowerRight;

    int itsTop;
    int itsLeft;
    int itsBottom;
    int itsRight;
};
Rectangle::Rectangle(int top, int left, int bottom, int right) {
    itsTop = top;
    itsLeft = left;
    itsRight = right;
    itsBottom = bottom;
    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);
    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);
    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);
    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
}
int Rectangle::GetArea() const {
    return (itsRight - itsLeft)* (itsTop - itsBottom);
}
int main()
{
    Rectangle MyRect(100, 20, 50, 80);
    std::cout << "The area is: " << MyRect.GetArea() << " the upper left is " << MyRect.GetUpperLeft().GetX() << std::endl;
    
}
