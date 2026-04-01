#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int roll;
    char name[30];

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void showData() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;

    // Writing object to file
    ofstream fout("student.dat", ios::binary);
    s.getData();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    // Reading object from file
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    cout << "\nData read from file:\n";
    s.showData();
    fin.close();

    return 0;
}
