// Develop an app using C++ to calculate employee salary.

//  class Employee is created with the given private member variables as part of the code skeleton.

// int count //Use appropriate keyword to make this a static variable and assign value as 100.For the first employee the id should be 100, for second employee the id should be 101 and so on.
// int employeeId 
// string employeeName
// double salary
// double netSalary
// Include appropriate getters and setters methods in the Employee class as public. 

// Implement the given methods as public in the Employee class:

// void calculateNetSalary(int pfpercentage)  - This method should take the Provident fund percentage as an argument. Deduct the Provident Fund amount from the salary and set the netSalary. 
// void getEmployeeDetails() - This method gets the employee details like employeeName, employee salary and assign to the private variables.
// static int generateEmployeeId() â€“ increment the value of count by 1 and assign the value to employee id.
// void display() - displays the employee details.

// Implement the main method and invoke the methods to get the input, and print the details as shown in the sample. 

// Note:

// In the main method create an object for the employee class and invoke the getEmployeeDetails method, to get the employeeID invoke generateEmployeeId static method, next invoke the calculateNetSalary method and then invoke display method.
// Important Note: Do not remove or edit the code which is given as part of the code skeleton.

// Sample Input 1:

// Enter Name:
// Pohe
// Enter salary (In dollars):
// 50000
// Enter PF percentage:
// 12

// Sample Output 1:
// Id: 100
// Name: Pohe
// Net Salary (In dollars): 44000

// Sample Input 2:

// Enter Name:

// John

// Enter salary (In dollars):
// 60000
// Enter PF percentage:
// 12

// Sample Output 2:
// Id: 101
// Name: John
// Net Salary (In dollars): 52800

// Note: Avoid the usage of exit(0) in your code.

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    private:
        static int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        void setEmployeeId(int id)
        {
            employeeId=id;
        }

        int getEmployeeId()
        {
            return employeeId;
        }

        void setEmployeeName(string name)
        {
            this->employeeName=name;
        }

         string getEmployeeName()
        {
            return this->employeeName;
        }

        void setSalary(double sal)
        {
            this->salary=sal;
        }

        double getSalary()
        {
            return this->salary;
        }

        void setNetSalary(double netSal)
        {
            this->netSalary=netSal;
        }

        double getNetSalary()
        {
           return this->netSalary;
        }

        void calculateNetSalary(int pfpercentage)
        {
            setNetSalary(salary - (salary * pfpercentage) / 100);
        }

        void display()
        {
            //setEmployeeId(generateEmployeeId());
            cout << "Id: " << generateEmployeeId() << endl;
            cout << "Name: " << getEmployeeName() << endl;
            cout << "Net Salary (In dollars): " << getNetSalary() << endl;
        }

        void getEmployeeDetails()
        {
            cout << "Enter Name: " << endl;
            cin >> employeeName;
            cout << "Enter Salary (in dollars): " << endl;
            cin >> salary;

            setSalary(salary);
            setEmployeeName(employeeName);
        }

        static int generateEmployeeId()
        {
            int _id = count;
            count = count + 1;
            return _id;
        }
        //fill the code here
};

int Employee::count = 100;

int main() //DO NOT change the 'main' signature
{
    //create object for Employee class
    Employee employee;
    
    employee.getEmployeeDetails();
    
    int pfpercentage;
    cout<<"Enter PF percentage: "<<endl;
    cin>>pfpercentage;

    employee.calculateNetSalary(pfpercentage);
    employee.display();

    //fill the code here
    return 0;
}

