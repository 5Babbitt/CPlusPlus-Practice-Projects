// class Employee is created with the given private member variables as a part of the code skeleton.

// int employeeId
// string employeeName
// double salary
// double netSalary
// Include appropriate public getters and setters methods in the Employee class.
// getEmployeeId()
// getEmployeeName()
// getSalary()
// getNetSalary()
// setEmployeeId(int)
// setEmployeeName(string)
// setSalary(double)
// setNetSalary(double)
// The Net Salary, which is the amount an Employee receives at the end of a month, is the amount after deduction of Provident Fund contribution from Salary. The Provident Fund contribution is a Retirement/Pension Fund contribution. 

// Write the following 'public' method in the Employee class:

// void calculateNetSalary(int pfpercentage)  - This method should take PF percentage as an argument. Deduct the PF amount from the salary and set the netSalary.  

// Formula:

// netSalary = salary - ( salary * pfpercentage ) / 100;

// Create a main() function that invokes the method 'calculateNetSalary' by passing the PF percentage as an argument and prints the details as shown in the sample Input/ Output. 

// Note: Avoid the usage of exit(0) in your code.  

#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
    //Include necessary methods
        int getEmployeeId()
        {
            return employeeId;
        }
        
        string getEmployeeName()
        {
            return employeeName;
        }
        
        double getSalary()
        {
            return salary;
        }
        
        double getNetSalary()
        {
            return netSalary;
        }
        
        void setEmployeeId(int id)
        {
            employeeId = id;
        }
        
        void setEmployeeName(string name)
        {
            employeeName = name;
        }
        
        void setSalary(double value)
        {
            salary = value;
        }
        
        void setNetSalary(double value)
        {
            netSalary = value;
        }

        void calculateNetSalary(int pfpercentage)
        {
            setNetSalary(salary - ( salary * pfpercentage ) / 100);
        }
};


int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of the code skeleton
    int id;
	string name;
	double sal;
	float pf;
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter salary:"<<endl;
	cin>>sal;
	cout<<"Enter PF percentage:"<<endl;
	cin>>pf;
    
    Employee employee;

    employee.setEmployeeId(id);
    employee.setEmployeeName(name);
    employee.setSalary(sal);
    employee.calculateNetSalary(pf);

    cout << "Id: " << employee.getEmployeeId() << endl;
    cout << "Name: " << employee.getEmployeeName() << endl;
    cout << "Salary: " << employee.getSalary() << endl;
    cout << "Net Salary: " << employee.getNetSalary() << endl;

    //Fill code here
    return 0;
}
