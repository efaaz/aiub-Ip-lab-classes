#include <iostream>
#include <math.h>
using namespace std;

struct Point
{
    int x;
    int y;
    float calDistance(Point p){
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }

    void checkThirdPoint(Point p2, Point p3){
        if ((p2.y - y) * (p3.x - x) == (p3.y - y) * (p2.x - x)){
            cout << "The third point lies on the line formed by the first two points" << endl;
        }
        else{
            cout << "The third point does not lie on the line" << endl;
        }

    }
};

int main(){
    Point p1, p2, p3;
    cout << "Enter the coordinates of first point ";
    cin >> p1.x >> p1.y;
    cout << "Enter the coordinates of secound point ";
    cin >> p2.x >> p2.y;
    cout << "Enter the coordinates of third point";
    cin >> p3.x >> p3.y;

    cout << "Distance of the two points: " << p1.calDistance(p2) << endl;

    p1.checkThirdPoint(p2, p3);
}