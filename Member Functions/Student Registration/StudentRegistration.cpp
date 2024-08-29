// Christy College of Engineering and Technology wants to create an application to display the studentâ€™s details. Develop a C++ program to implement this scenario. 

// Create a class Student with the below private attributes:

// int studentId
// string name
// int departmentId
// string gender
// string phoneNumber
// Include appropriate public getter and setter methods for the above variables. 

//     void setStudentId(int)
//     int getStudentId()
//     void setName(string)
//     string getName()
//     void setDepartmentId(int)
//     int getDepartmentId()
//     void setGender(string)
//     string getGender()
//     void setPhoneNumber(string)
//     string getPhoneNumber()
// Write a main method to get the details from the user. Create an object for the Student class and set the values using the setter method. Then get the values using getters and display them as shown in sample Input/Output.

// Note: Use the same attribute names and methods as given in the question. Use camel case notation [mixed case with the first letter lowercase and with the first letter of each internal word capitalized, Example: studentId] for methods and variables.

// Note: Avoid the usage of exit(0) in your code.  

#include <iostream>
using namespace std;

class Student {    //DO NOT change the class name
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
    public:    
        //Include Getters and setters for above variables.
        int getStudentId()
        {
            return studentId;
        }

        string getName()
        {
            return name;
        }

        int getDepartmentId()
        {
            return departmentId;
        }

        string getGender()
        {
            return gender;
        }

        string getPhoneNumber()
        {
            return phoneNumber;
        }

        void setStudentId(int id)
        {
            studentId = id;
        }

        void setName(string value)
        {
            name = value;
        }

        void setDepartmentId(int id)
        {
            departmentId = id;
        }

        void setGender(string value)
        {
            gender = value;
        }

        void setPhoneNumber(string number)
        {
            phoneNumber = number;
        }
};

int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of the code skeleton
    int id,deptId;
    string name,gender,phNo;
    cout<<"Enter the details:"<<endl;
    cout<<"Student Id"<<endl;
    cin>>id;
    cout<<"Student Name"<<endl;
    cin>>name;
    cout<<"Department Id"<<endl;
    cin>>deptId;
    cout<<"Gender"<<endl;
    cin>>gender;
    cout<<"Phone Number"<<endl;
    cin>>phNo;

    Student student;

    student.setStudentId(id);
    student.setName(name);
    student.setDepartmentId(deptId);
    student.setGender(gender);
    student.setPhoneNumber(phNo);

    cout << "Student details entered:" << endl;
    cout << student.getStudentId() << " ";
    cout << student.getName() << " ";
    cout << student.getDepartmentId() << " ";
    cout << student.getGender() << " ";
    cout << student.getPhoneNumber() << " ";
    
    //Fill the code here
       return 0;
}
