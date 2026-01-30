# include <iostream>
#include <string>
using namespace std;


// LEVEL 1: Object with Array (Basics)
// Q1. Student Marks

// Create a class Student that has:

// rollNo

// name

// array marks[5]

// Tasks:

// Input details for 1 student

// Display all marks

// Calculate and print total marks


class Student {
    private:
    int rollNo;
    char name [20];
    int marks[5];

    public:

    void user(){
        cout << "Enter Roll Number";
        cin >> rollNo;

        cout << "Enter name of the student";
        cin >> name;

        cout << "Enter student marks";
        for( int i=1 ; i<=5 ; i++){
            cin >> marks[i];
           
        };

       

    }

     void show(){
        cout << "Enter Roll Number : "<<rollNo << endl;
        cout << "Enter name of the student : " << name <<endl;;
        cout << "Enter student marks : " <<endl;

        for(int i =1 ; i<=5 ; i++){
            cout << marks[i] << " ";
        }


            
        }

        void Totalmarks(){
            int sum = 0;

            for (int i = 1 ; i<=5 ; i++){
                sum += marks[i];

            }
            cout << "Total marks : "<< sum << endl;

        }
};

// int main(){
//     Student s;
//     s.user();
//     s.show();
//     s.Totalmarks();
// }


// Q2. Employee Salary

// Create a class Employee with:

// empId

// empName

// array salary[12] (monthly salary)

// Tasks:

// Store salary for 12 months

// Calculate annual salary

// Display employee details


class Employee{
    private:
    int empId;
    char empName[50];
    int salary [12];

    public:

    void getdata(){
        cout << "employee id : ";
        cin >> empId;

        cout << "employee name : " ;
        cin >> empName;

        cout << "enter salary for 12 months";
        for(int i = 1 ; i<=12 ; i++){
            cin >> salary[i];

        };


    }

        int annuualSalary(){
            int total = 0;
            for(int i = 1 ; i<=12; i++){
                total += salary[i];

            }
            return total;
        }

void show(){
    cout << "Employee Id : " << empId << endl ;
    cout << "Emlpoyee name : " << empName << endl;
    cout << "annual salary of the employee : " << annuualSalary() << endl;
}

    
};



int main(){
    Employee s;
    s.getdata();
    s.show();
    s.annuualSalary();

}