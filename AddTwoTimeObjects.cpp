#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    // add time objects and return object
    Time add(Time t) {
        Time temp;

        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        // handle extra minutes
        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }

        return temp;
    }
};

int main() {
    Time t1, t2, t3;
    int h, m;

    cout << "Enter first time (hours minutes): ";
    cin >> h >> m;
    t1.setTime(h, m);

    cout << "Enter second time (hours minutes): ";
    cin >> h >> m;
    t2.setTime(h, m);

    // object as argument + returning object
    t3 = t1.add(t2);

    cout << "Total Time = ";
    t3.display();

    return 0;
}
