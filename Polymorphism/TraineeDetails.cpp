#include<iostream>
using namespace std;

class Person {
    protected:
        string socialSecurityNumber;
    public:
        //include getter and setter
        void setSocialSecurityNumber(string ssn) 
        {
            this->socialSecurityNumber = ssn;
        }
    
        string getSocialSecurityNumber() 
        {
            return this->socialSecurityNumber;
        }
};

class Student : virtual public Person
{
    protected:
        int studentId;
    public:  
        //include getter and setter
        void SetStudentId(int id) 
        {
            this->studentId = id;
        }
      
        int getStudentId() 
        {
            return this->studentId;
        }
};

class Employee : virtual public Person
{
    protected:
        int employeeId;
    public:
        //include getter and setter
        void setEmployeeId(int id) 
        {
            this->employeeId = id;
        }
   
        int getEmployeeId() 
        {
            return this->employeeId;
        }
};

class Trainee : public Student, public Employee 
{
    private:
        int traineeId;
    public:
        //include getter and setter
        void setTraineeId(int id) 
        {
            this->traineeId = id;
        }
       
        int getTraineeId() 
        {
            return this->traineeId;
        }
};

int main() 
{
    Trainee trainee;
    
    string ssn;
    int id;
    cout<<"Enter Trainee ID:";
    cin>>id;
    cout<<"Enter SSN Number:";
    cin>>ssn;
   
    trainee.setTraineeId(id);
    trainee.setSocialSecurityNumber(ssn);
    
    cout << "Trainee ID: " << trainee.getTraineeId() << endl;
    cout << "Social Security Number: " << trainee.getSocialSecurityNumber() << endl;
   
    //fill the code here
    return 0;
}	 	  	  		  	     	     	       	 	