// class Train with the given private member variables is created as part of the code skeleton

//    long passengerPhone
//    string passengerName
//    char gender
//    int age
//    double ticketPrice
// Include appropriate getters and setters methods as public

// long getPassengerPhone() 
// string getPassengerName() 
// char getGender()
// int getAge() 
// double getTicketPrice()
// void setPassengerPhone(long pPhone) 
// void setPassengerName(string pName)
// void setGender(char pGender)
// void setAge(int pAge) 
// void setTicketPrice(double tPrice)
// Write the following method in the Train class as public.
// double calculateAmount()â€”this method should calculate the total and return it based on the discount given:

// For Children with age less than 16, give a 50% discount
// For Senior citizen with age greater than or equal to 60 give a 25% discount
// For Ladies give a 10% discount
// No discount for the remaining category. 
// Based on the above condition calculate the total price. One person should not get more than one Discount.

// In the main function get the input and invoke the method calculateAmount().

// Note: Avoid the usage of exit(0) in your code.  

// Sample Input 1:

// Enter the Passenger phone no:
// 98709879
// Enter the Passenger name:
// Ragav
// Enter the Passenger Age:
// 16
// Enter the Gender(M/F):
// M
// Enter the Ticket Price (In dollars):
// 100.0

// Sample Output 1:

// Total Amount(In dollars): 100

// Sample Input 2:

// Enter the Passenger phone no:
// 7980653
// Enter the passenger name:
// Priya
// Enter the age:
// 61
// Enter the gender(M or F):
// F
// Enter the ticket price (In dollars):
// 500.0

// Sample Output 2:

// Total Amount(In dollars): 375

#include <iostream>
using namespace std;

class Train //Add required code
{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;
    public:
    //include required getter and setter method
        double calculateAmount();

        long getPassengerPhone() 
        {
            return passengerPhone;
        }
        
        string getPassengerName() 
        {
            return passengerName;
        }
        
        char getGender()
        {
            return gender;
        }
        
        int getAge() 
        {
            return age;
        }
        
        double getTicketPrice()
        {
            return ticketPrice;
        }
        
        void setPassengerPhone(long pPhone) 
        {
            this -> passengerPhone = pPhone;
        }
        
        void setPassengerName(string pName)
        {
            this -> passengerName = pName;
        }
        
        void setGender(char pGender)
        {
            this -> gender = pGender;
        }
        
        void setAge(int pAge) 
        {
            this -> age = pAge;
        }
        
        void setTicketPrice(double tPrice)
        {
            this -> ticketPrice = tPrice;
        }        
};

double Train::calculateAmount()
{
    float discount;

    if (gender == 'F')
        discount = getTicketPrice() * 10/100;

    if (age >= 60)
        discount = getTicketPrice() * 25/100;

    if (age < 16)
        discount = getTicketPrice() * 50/100;

    return getTicketPrice() - (double)discount;
}

int main(){   //DO NOT change the 'main' signature
    //Fill code here
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    cout<<"Enter the Passenger name : ";
    cin>>name;
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;

    //fill the code here
    Train train;

    train.setPassengerPhone(phone);
    train.setPassengerName(name);
    train.setAge(age);
    train.setGender(gender);
    train.setTicketPrice(ticketPrice);

    cout << "Total Amount(In Dollars): " << train.calculateAmount() << endl;

    return 0;
}
