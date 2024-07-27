// 3. Program to convert Cartesian coordinate to Polar.
#include<iostream>
#include<iomanip>
#include<cmath>
const double pi = 3.1415;
using namespace std;
class cartesian
{
    double x,y;
    public:
    cartesian(){
        x = 0;
        y = 0;
    }
    void setdata(){
        cout<<"Enter the  cartesian coordinates:"<<endl;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
    }
    void display(){
        cout<<"Cartesian coordinates:";
        cout<<fixed<<setprecision(3);

    }
double getx(){return x;}
double gety(){return y;}
};
class polar{
double r, theta;
public:
polar(){
    r = 0;
    theta = 0;
}
polar (cartesian o1){
   double a,b;
    a = o1.getx();
    b = o1.gety();
    r = sqrt(a*a + b* b);
    theta = atan2(b,a);
    theta *= (180/ pi);


}
void display(){
    cout<<"After conversion: "<<endl<<" polar coordinates is: ";
    cout<<fixed<< setprecision(3);
    cout<<"("<<r<<","<<theta<<")";
}
};
int main()
{
    cartesian xandy;
    polar randtheta;
    xandy.setdata();
    xandy.display();
     randtheta = xandy;
     randtheta.display();
return 0;
}