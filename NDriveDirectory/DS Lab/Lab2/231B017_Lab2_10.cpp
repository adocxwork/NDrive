#ifndef EMPLOYEE_DATABASE_H
#define EMPLOYEE_DATABASE_H
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAX_EMPLOYEES = 100;
struct Employee {
    int emp_id;
    string emp_name;
    string emp_city;
};

Employee* findEmployeeById(Employee db[], int size, int emp_id) {
    for (int i = 0; i < size; ++i) {
        if (db[i].emp_id == emp_id) {
            return &db[i];
        }
    }
    return nullptr;
}

void sortEmployeesById(Employee db[], int size) {
    sort(db, db + size, [](const Employee &a, const Employee &b) {
        return a.emp_id < b.emp_id;
    });
}

void sortCharsAlphabetically(char arr[], int size) {
    sort(arr, arr + size);
}

int countEmployees(Employee db[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (db[i].emp_id != 0) { // Assuming 0 is not a valid Emp_id
            ++count;
        }
    }
    return count;
}

void addEmployeeRecords(Employee db[], int &size, const Employee new_employees[], int num_new_employees) {
    for (int i = 0; i < num_new_employees; ++i) {
        if (size < MAX_EMPLOYEES) {
            db[size++] = new_employees[i];
        } else {
            cout << "Database is full. Cannot add more records." << endl;
            break;
        }
    }
}

#endif