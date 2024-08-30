// DreamTek Company provides training for new employees who have joined after graduating from college. During the training, these employees are designated as â€œAssociateâ€. The training duration is 60 days for each Associate. In these 60 days, Associates learn various technologies. The first 20 days they learn â€œCore skillsâ€, the next 20 days they learn â€œAdvanced skillsâ€, and the final 20 days they go through a â€œProject phaseâ€. DreamTek would like software to help them know which phase a particular Associate is currently in.

// Create a class Employee with the following private member variables:

// int associateId
// string associateName
// string workStatus
// Include appropriate getters and setters method in Employee class for the above member variables.

// setAssociateId(int)
// getAssociateId()
// setAssociateName(string)
// getAssociateName()
// setWorkStatus(string)
// getWorkStatus()
// updateStatusDetails(int)
// Write the following 'public' method in the Employee class:


// void updateStatusDetails(int days) - This method should take the number of days as an argument and sets the work status of an employee.
// 1. If days <= 20 then setWorkStatus as â€œCore skillsâ€
// 2. If days > 20 && days <=40 then setWorkStatus as â€œAdvanced skillsâ€
// 3. If days > 40 then setWorkStatus as â€œProject phaseâ€

// In the main() method, create an object for the Employee class and get the details as shown in the sample input and assign the values for its attributes using the setters. Invoke the updateStatusDetails() method and find the work status and display the details as shown in the sample output.

// Note: Avoid the usage of exit(0) in your code.  

#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int associateId;
        string associateName;
        string workStatus;
    public:
    //Include necessary methods 
        int getAssociateId()
        {
            return associateId;
        }

        string getAssociateName()
        {
            return associateName;
        }

        string getWorkStatus()
        {
            return workStatus;
        }

        void setAssociateId(int id)
        {
            associateId = id;
        }

        void setAssociateName(string name)
        {
            associateName = name;
        }

        void setWorkStatus(string status)
        {
            workStatus = status;
        }

        void updateStatusDetails(int days)
        {
            if (days <= 20)
                setWorkStatus("Core Skills");
            else if (days > 20 && days <= 40)
                setWorkStatus("Advanced Skills");
            else if (days > 40)
                setWorkStatus("Project phase");
        }

};


int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of code skeleton 
    int id;
	string name;
	int days;
	cout<<"Enter the associate id:";
	cin>>id;
	cout<<"Enter the associate name:";
	cin>>name;
	cout<<"Enter the number of days:";
	cin>>days;

    Employee employee;

    employee.setAssociateId(id);
    employee.setAssociateName(name);
    employee.updateStatusDetails(days);

    cout << "The associate " << employee.getAssociateName() << " work status: " << employee.getWorkStatus() << endl;
    
    //Fill the code here 
    return 0;
}
