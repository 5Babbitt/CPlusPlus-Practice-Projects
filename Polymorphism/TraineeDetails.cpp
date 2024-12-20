#include<iostream>
using namespace std;

class Person {
    protected:
        string socialSecurityNumber;
    public:
        //include getter and setter
        void setSocialSecurityNumber(string ssn) {
            socialSecurityNumber = ssn;
        }
    
        string getSocialSecurityNumber() {
            return socialSecurityNumber;
        }
};

class Student : public virtual Person
{
    protected:
        int studentId;
    public:  
        //include getter and setter
        void SetStudentID(int id) {
            studentId = id;
        }
      
        int getStudentID() {
            return studentId;
        }
};

class Employee : public virtual Person
{
    protected:
        int employeeId;
    public:
        //include getter and setter
        void setEmployeeID(int id) {
            employeeId = id;
        }
   
        int getEmployeeID() {
            return employeeId;
        }
};

class Trainee : public Student, public Employee 
{
    private:
        int traineeId;
    public:
        //include getter and setter
        void setTraineeID(int id) {
            traineeId = id;
        }
       
        int getTraineeID() {
            return traineeId;
        }
};

int main() {
    Trainee trainee;
    
    string ssn;
    int id;
    cout<<"Enter Trainee ID:";
    cin>>id;
    cout<<"Enter SSN Number:";
    cin>>ssn;
   
    trainee.setTraineeID(id);
    trainee.setSocialSecurityNumber(ssn);
    
    cout << "Trainee ID: " << trainee.getTraineeID() << endl;
    cout << "Social Security Number: " << trainee.getSocialSecurityNumber() << endl;
   
    //fill the code here
    return 0;
}	 	  	  		  	     	     	       	 	