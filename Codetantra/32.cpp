#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Date {
    int date;
    int month;
    int year;
};

class Employee {
public:
    void get_employee_details() {
        cout << "EMPLOYEE DETAILS" << endl;
        cout << "Employee Id: ";
        cin >> emp_id;
        cin.ignore(); // Ignore newline character
        cout << "Name: ";
        getline(cin, name);
        cout << "Designation: ";
        getline(cin, designation);
        cout << "DOB:" << endl;
        cout << "Date: ";
        cin >> dob.date;
        cout << "Month: ";
        cin >> dob.month;
        cout << "Year: ";
        cin>> dob.year;
    }

    void save_to_file(string file_name) {
        ofstream file(file_name, ios::out | ios::binary);
        file.write((char*) &emp_id, sizeof(int));
        file.write(name.c_str(), 20);
        file.write(designation.c_str(), 20);
        file.write((char*) &dob.date, sizeof(int));
        file.write((char*) &dob.month, sizeof(int));
        file.write((char*) &dob.year, sizeof(int));
        file.close();
        cout << "Date saved into the file." << endl;
    }

    void load_from_file(string file_name) {
        ifstream file(file_name, ios::in | ios::binary);
        file.read((char*) &emp_id, sizeof(int));
        char buf[21];
        file.read(buf, 20);
        buf[20] = '\0';
        name = buf;
        file.read(buf, 20);
        buf[20] = '\0';
        designation = buf;
        file.read((char*) &dob.date, sizeof(int));
        file.read((char*) &dob.month, sizeof(int));
        file.read((char*) &dob.year, sizeof(int));
        file.close();
        cout << "Data extracted from file." << endl;
    }

    void display_employee_details() {
        
        cout << "Employee Id: " << emp_id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "DOB: " << dob.date << "/" << dob.month << "/" << dob.year << endl;
    }

private:
    int emp_id;
    string name;
    string designation;
    Date dob;
};

int main() {
    Employee emp;
    emp.get_employee_details();
    emp.save_to_file("employee.bin");
    emp.load_from_file("employee.bin");
    cout << "Employee Details" << endl;
    emp.display_employee_details();

    return 0;
}
