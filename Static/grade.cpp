// Develop a Student Grade Calculator (SGC) application.

// class College is already created with private attributes and public methods as given below, as a part of the code skeleton.
// class College
// {
// private:
//      string principal_name;  // principal_name is common to all students - so use the appropriate keyword to make this a static variable
// public:
//      static void setPrincipalName(string name);
//      static string getPrincipalName();
// };

// Note: Initialize the static principal_name variable with value "John", in class College.

// class Student is already created with the private attributes and public methods as given below, as a part of the code skeleton.
// class Student
// {
// private:
//      int id;
//      string name;
//      float marks[5];
//      float average;
//      char grade;
//      College cObj;
// public:
//      //Included Setters and Getters as a part of code skeleton
//      void getStudentDetails();
//      void calculateAverage();
//      void findGrade();
//      void displayStudentDetails();
// };

// Appropriate getters and setters methods are included as a part of the code skeleton.
// void calculateAverage() - This method should calculate the average and set the average mark for the current student.
// void findGrade() - This method should set the grade based on the average calculated. If the average is between 80 and 100, then set grade as 'O', else 'A'. If the student gets less than 50 in any of the subjects, then set grade as 'F'. Using the appropriate setter method to set the grade to the student.
// Implement the main method as given below :
// In the main method, create an object for the Student class and invoke the getStudentDetails() method to get the input from the user.  This method gets the student details like studentName, student id, five subject marks and assign to the private variables.
// Also, calculate the average and grade for that student object using appropriate methods. 
// Invoke the displayStudentDetails() method to display the output as shown in the sample output.
// SGC app should get the input and display the output as specified in the sample input / output given.
// Important Note : Do not remove or edit the code which is given as the part of the code skeleton - except at principal_name declaration.

// Sample Input 1:
// Enter Student ID :
// 101
// Enter Student Name :
// Remo
// Enter the five subject marks :
// 90
// 80
// 75
// 90
// 85
// Sample Output 1:
// Student Name : Remo
// Student ID : 101
// Principal Name : John
// Average : 84
// Grade : O
 
// Sample Input 2:
// Enter Student ID :
// 103
// Enter Student Name :
// Harry
// Enter the five subject marks :
// 1
// 2
// 3
// 4
// 5
// Sample Output 2:
// Student Name : Harry
// Student ID : 103
// Principal Name : John
// Average : 3
// Grade : F

// Note: Avoid the usage of exit(0) in your code.  

#include <iostream>
using namespace std;

class College
{
    private:
        static string principal_name;  // principal_name is common for all the students
    public:
        static void setPrincipalName(string name)
        {
            principal_name = name;
        }
        
        static string getPrincipalName()
        {
            return principal_name;
        }
};

string College::principal_name = "John";

class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
        void getStudentDetails()
        {
            cout << "Enter Student ID : ";
            cin >> id;
            cout << "Enter Student Name : ";
            cin >> name;
            cout << "Enter the five subject marks : ";
            for (int i = 0; i < (sizeof(marks) / sizeof(marks[0])); i++)
            {
                cin >> marks[i];
            }
        }

        void calculateAverage()
        {
            int total = 0;
            int numMarks = sizeof(marks) / sizeof(marks[0]);

            for (int i = 0; i < numMarks; i++)
            {
                total += marks[i];
            }

            setAverage(total / numMarks);
        }

        void findGrade()
        {
            if (average >= 80)
            {
                setGrade('O');
            }
            else
            {
                setGrade('A');
            }

            for (int i = 0; i < sizeof(getMarks()) / sizeof(getMarks()[0]); i++)
            {
                if (marks[i] < 50)
                {
                    setGrade('F');
                }
            }
        }

        void displayStudentDetails()
        {
            cout << "Student Name : " << getName() << endl;
            cout << "Student ID : " << getId() << endl;
            cout << "Principal Name : " << getCollegeObject().getPrincipalName() << endl;

            calculateAverage();
            findGrade();

            cout << "Average : " << getAverage() << endl;
            cout << "Grade : " << getGrade() << endl;
        }

        void setId(int id)
        {
            this->id=id;
        }

        int getId()
        {
            return id;
        }

        void setAverage(float average)
        {
            this->average=average;
        }

        int getAverage()
        {
            return average;
        }

        void setName(string n)
        {
            this->name=n;
        }

        string getName()
        {
            return name;
        }

        void setMarks(float m[])
        {
            for(int i=0; i<5;i++)
                this->marks[i]=m[i];
        }

        float* getMarks()
        {
            return marks;
        }

        void setGrade(char g)
        {
            grade=g;
        }

        char getGrade()
        {
            return grade;
        }

        College getCollegeObject()
        {
            return cObj;
        }

};

int main()  //DO NOT change the 'main' signature
{
    //Fill code here
    Student student;

    student.getStudentDetails();
    student.displayStudentDetails();

    return 0;
}