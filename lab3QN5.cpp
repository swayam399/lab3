// 5. Program to convert time (hour, minute and second) in 12-hr format to
// 24-hr format.

#include <iostream>
#include <iomanip>
using namespace std;
class format12
{
    int hour, minute, second;
    string period;

public:
    format12()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    void setdata()
    {
        cout << "Enter the time in 12 hour format:" << endl;
        cout << "Hour:";
        cin >> hour;
        cout << "Minute:";
        cin >> minute;
        cout << "second :";
        cin >> second;
        cout << "period:";
        cin >> period;
    }
    int gethour() { return hour; }
    int getminute() { return minute; }
    int getsecond() { return second; }
    string getperiod() { return period; }
    void display()
    {
        cout << "Entered time is:";
        cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " " << period << endl;
    }
};
class format24
{
    int hour, minute, second;
    string period;

public:
    format24()
    {
    }
    format24(format12 o1)
    {
        hour = o1.gethour();
        minute = o1.getminute();
        second = o1.getsecond();
        period = o1.getperiod();
        if (period == "PM" || period == "pm")
        {
            if (hour != 12)
            {
                hour = hour + 12;
            }
        }
         if (period == "AM" || period == "am")
        {
            if (hour == 12)
            {
                hour = hour - 12;
            }
        }
    }
    void display()
    {
        cout << "Entered time is:";
        cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << " " << period << endl;
    }
};
int main()
{
    format12 twelve;
    format24 twentyfour;
    twelve.setdata();
    twelve.display();
    twentyfour = twelve;
    twentyfour.display();

    return 0;
}