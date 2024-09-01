// Develop an Employee Bonus Percentage Calculator Application using C++.
// class Company is created with the given static variables and method as part of the code skeleton.

// class Company
// {

//     private:

//         static string companyName;

//         static string address;

//         static long int contactNumber;

//     public:

//         static void displayCompanyDetails();

// }; 

// Appropriate getter and setter methods for the above attributes is provided as a part of code skeleton. Assign the given values to the private static attributes available in the Company class.

// companyName = "TekSoft"
// address = "LosAngeles"
// contactNumber = 422245673

// Implement the given static method in the Company class to display the company details as shown in the sample output.

// void displayCompanyDetails();

// Class Employee is created with the given private member variables and public methods as part of the code skeleton.

// string empName
// int empId
// double netSalary
// Company cObj;
// void getEmployeeDetails() - Implement this method to get the inputs like empName, empId and netSalary from the user.
// int calculateBonusPercentage() - return the bonus percentage based on netSalary. If the netSalary >50000 and <=80000 the bonus percentage should be 5%, if  netSalary >30000 and <=50000 the bonus percentage should be 10%, if netSalary >10000 and <=30000 the bonus percentage should be 15%, else bonus percentage should be 20%.
// void displayEmployeeDetails() - Implement this method to display the employee details with the bonus percentage, to get the bonus percentage invoke the method calculateBonusPercentage().

// Appropriate getter and setter methods are provided as a part of code skeleton in the Employee class. 

// Implement the main method, create an object for the Employee class and invoke the methods to get the input, and print the details as shown in the sample. 
// Important Note: Do not remove or edit the code which is given as part of the code skeleton.

// Note: Avoid the usage of exit(0) in your code.  

// Sample Input 1:

// Enter Employee Name:
// Rose
// Enter Employee ID:
// 147
// Enter Net Salary (In dollars):
// 50000

// Sample Output 1:

// Company Name:TekSoft
// Address:Los Angeles
// Contact Number:422245673
// Employee Name:Rose
// Employee ID:147
// Employee Net Salary (In dollars):50000
// Employee Bonus Percentage:10%

#include <iostream>
#include <string.h>

using namespace std;

class Company
{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails();

        static string getCompanyName()
        {
            return companyName;
        }

        static string getAddress()
        {
            return address;
        }

        static long int getContactNumber()
        {
            return contactNumber;
        }

        static void setCompanyName(string cname)
        {
            companyName=cname;
        }

        static void setAddress(string add)
        {
            address=add;
        }

        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }

};

string Company::companyName = "TekSoft";
string Company::address = "LosAngeles";
long int Company::contactNumber = 422245673;

void Company::displayCompanyDetails()
{
    cout << "Company Name: " << getCompanyName() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << "Contact Number: " << getContactNumber() << endl;
}

class Employee
{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails();
        int calculateBonusPercentage();
        void displayEmployeeDetails();

        void setEmpName(string name)
        {
            this->empName=name;
        }

        void setEmpId(int id)
        {
            this->empId=id;
        }

        void setNetSalary(double net)
        {
            this->netSalary=net;
        }

        void setCobj(Company c)
        {
            this->cObj=c;
        }

        string getEmpName()
        {
            return this->empName;
        }

        int getEmpId()
        {
            return this->empId;
        }

        double getNetSalary()
        {
            return this->netSalary;
        }

        Company getCobj()
        {
            return this->cObj;
        }

        //include required getter methods
};

void Employee::getEmployeeDetails()
{
    string name;
    int id;
    double netSalary;

    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Net Salary (in Dollars): ";
    cin >> netSalary;

    setEmpName(name);
    setEmpId(id);
    setNetSalary(netSalary);
}

void Employee::displayEmployeeDetails()
{
    cObj.displayCompanyDetails();

    cout << "Employee Name: " << getEmpName() << endl;
    cout << "Employee ID: " << getEmpId() << endl;
    cout << "Employee Net Salary: " << getNetSalary() << endl;
    cout << "Employee Bonus Percentage: " << calculateBonusPercentage() << '%' << endl;
}

int Employee::calculateBonusPercentage()
{
    if (netSalary <= 80000 && netSalary > 50000)
        return 5;
    else if (netSalary <= 50000 && netSalary > 30000)
        return 10;
    else if (netSalary <= 30000 && netSalary > 10000)
        return 15;
    else
        return 20;
}

int main()  //DO NOT change the 'main' signature
{
    Company company;

    Company::setCompanyName("TekSoft");
    Company::setAddress("Los Angeles");
    Company::setContactNumber(422245673);

    Employee employee;

    employee.setCobj(company);
    employee.getEmployeeDetails();
    employee.displayEmployeeDetails();

    //fill the code here
    return 0;
}