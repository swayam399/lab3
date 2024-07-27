// 2. Program to convert Polar Coordinate to Cartesian.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double pi = 3.1415;
class cartesian
{
    double x, y;

public:
    cartesian(double x1, double y1)  {
        x = x1;
        y= y1;
    }

    void display()
    {
        cout<<"polar coordinates is converted into cartesian coordinates."<<endl;
        cout << "Cartesian coordinates: (" << fixed << setprecision(2);
        cout << x << ", " << y << ")" << endl;
    }
};
class polar
{
    int r;
    double theta;

    double x, y;

public:
    polar(int a, int b)
    {
        r = a;
        theta = b;
        theta *= (pi / 180);
    }

    operator cartesian()
    {
        x = r * cos(theta);
        y = r * sin(theta);
        return cartesian(x, y);
    }

    void display()
    {
        
        cout << "Polar coordinates (" << r << ", " << theta << " radians)"<<endl;
       
    }
};



int main()
{
    int radius, theta;
    cout << "Enter the polar coordinates:" << endl;
    cout << "Radius: ";
    cin >> radius;
    cout << "Theta (in degrees): ";
    cin >> theta;

    polar first(radius, theta);
    first.display();
    cartesian second = first; 
    second.display();         
    return 0;
}
