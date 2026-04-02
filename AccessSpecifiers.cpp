#include <iostream>
using namespace std;

class A {
private:
    int emp_id;
    float emp_salary;

protected:
    string emp_designation;

public:
    // Function to set employee details
    void setData(int id, float salary, string desig) {
        emp_id = id;
        emp_salary = salary;
        emp_designation = desig;
    }

    // Function to calculate income tax
    void calculateTax() {
        float tax = emp_salary * 0.1;  // 10% tax
        cout << "Income Tax: " << tax << endl;
    }
};

// Class B inherits A
class B : public A {
public:
    // Function to print designation (from protected)
    void printDesignation() {
        cout << "Employee Designation: " << emp_designation << endl;
    }
};

int main() {
    B obj;   // object of derived class

    obj.setData(101, 50000, "Manager");

    obj.calculateTax();        // from public section of A
    obj.printDesignation();   // from class B

    return 0;
}
