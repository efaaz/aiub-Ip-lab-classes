#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;
    float area;

public:
    void getLengthandBreadth(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float returnArea()
    {
        area = length * breadth;
        return area;
    }
};

int main()
{
    float l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    Rectangle obj1;
    obj1.getLengthandBreadth(l, b);
    cout << "Area: " << obj1.returnArea() << endl;
    return 0;
}
