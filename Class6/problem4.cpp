#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    float breadth;
    float height;
    float volume;

public:
    void setLengthandBreadthandHeight(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    float returnVolume()
    {
        volume = length * breadth * height;
        return volume;
    }
};

int main()
{
    float l, b, h;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;
    Box obj1;
    obj1.setLengthandBreadthandHeight(l, b, h);
    cout << "volume: " << obj1.returnVolume() << endl;
    return 0;
}
