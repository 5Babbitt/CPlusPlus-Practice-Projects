// Howard School is conducting an examination for its students. As of now they are manually calculating the grade and results. As they are finding this difficult, they decided to automate the process of calculating the result and grade points. Help them with this.
//  class Examination contains below protected attributes and public method as a part of code skeleton,
//   int passMark - This attribute value is always 100.
// Getter and setter methods for above variables are provided as a part of code skeleton.

//  Write method with name 'displayResult' which has one parameter 'int gradePoint' and return type as void. 
// Functionality : displayResult method must check whether the student has passed or failed in a particular subject based on the gradePoint.
// Condition : If the gradePoint is greater than the passmark, display result as "Pass", else display result as "Fail".
// Create a class ScienceExam that inherits the properties of class Examination and has one method:
// Method with name 'calculateGradePoints' has one parameter 'int mark' with return type as int. 
// Functionality: calculateGradePoints method has to return the points scored by a student in the respective examination. 
// Condition: Multiply creditpoints and mark(Creditpoints for Science is always 2)

// Create a class MathsExam that inherits the properties of class Examination and has one method:
// Method with name 'calculateGradePoints' has one parameter 'int mark' with return type as int. 
// Functionality : calculateGradePoints method has to return the points scored by a student in the respective examination. 
// Condition: Multiply creditpoints and mark (Creditpoints for Maths is always 4)
// Create a function main() to get input and print the output.

// Note: Avoid the usage of exit(0) in your code.  

// Sample Input 1:

// Enter the mark in Science: 50
// Enter the mark in Maths: 70

// Sample Output 1:

// Science:
// Result: Pass 
// Gradepoints: 100
// Maths:
// Result: Pass 
// Gradepoints: 280

// Sample Input 2:

// Enter the mark in Science: 30
// Enter the mark in Maths: 100 

// Sample Output 2: 

// Science:
// Result: Fail 
// Gradepoints: 60
// Maths:
// Result: Pass 
// Gradepoints: 400

#include <iostream>
using namespace std;
 
class Examination 
{
    protected:
        int passMark=100;
    public:
        void setPassMark(int pMark)
        {
            passMark=pMark;
        }

        int getPassMark()
        {
            return passMark;
        }

        void displayResult(int gradePoint)
        {
            //fill the code here
            if (gradePoint > passMark)
                cout << "Result: Pass" << endl;
            else
                cout << "Result: Fail" << endl;

            cout << "Gradepoints: " << gradePoint << endl;
        }
};
 
class ScienceExam : public Examination
{
    public:
        int  calculateGradePoints(int mark)
        {
            //Implement your code  
            cout << "Science: " << endl;

            return 2 * mark;
        }
};

class MathsExam : public Examination
{
    public:
        int  calculateGradePoints(int mark)
        {
            //Implement your code 
            cout << "Maths: " << endl;

            return 4 * mark;
        }
};

// main function
int main()
{  
    int smark,mathmark;
    cout<<"Enter the mark in Science:";
    cin>>smark;
    cout<<"Enter the mark in Maths:";
    cin>>mathmark;
    //Implement your code 
    MathsExam maths;
    ScienceExam science;

    science.displayResult(science.calculateGradePoints(smark));
    maths.displayResult(maths.calculateGradePoints(mathmark));

    return 0;
}