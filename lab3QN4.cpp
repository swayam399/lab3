// 4. Program to convert time (hour, minute and second) in 24-hr format to
// 12-hr format.
#include <iostream>
#include <iomanip>
using namespace std;
class format24
{
    int hour, minute, second;
    
public:
    format24()
    {
    }

    void setdata()
    {
        cout << "Enter the time in 24 hour format:"<<endl;
        cout << "Hour:";
        cin >> hour;
        cout << "Minute:";
        cin >> minute;
        cout << "second :";
        cin >> second;
    }
    int gethour(){return hour;}
    int getminute(){return minute;}
    int getsecond(){return second;}
    void display(){
        cout<<"Entered time is:";
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<second<<endl;
    }
    
};
class format12
{
    int hour,minute,second;
    string period;
    public:
    format12(){

    }
format12(format24 o1)
    {
        hour = o1.gethour();
        minute = o1.getminute();
        second = o1.getsecond();
       if (hour == 0){
        hour += 12;
        period = "AM";
       }
       else if(hour == 12){
        period = "PM";
       }
       else if (hour >12){
        hour -= 12;
        period = "PM";
       }
       else 
       period = "AM";
    }
    void display(){
    cout<<"Entered time is:";
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<second <<" "<< period<<endl;
        }
} ;
int main()
{
    format24 twentyfour;
    format12 twelve;
    twentyfour.setdata();
    twentyfour.display();
    twelve = twentyfour;
    twelve.display();


    return 0;
}