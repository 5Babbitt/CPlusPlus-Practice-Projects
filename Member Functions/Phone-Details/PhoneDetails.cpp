// class Mobile is created with the below given private attributes as a part of the code skeleton,

// string mobileBrand
// string mobileModelName
// double mobilePrice
// Include appropriate public getter and setter methods for the above variables. 

//     string getMobileBrand()
//     string getMobileModelName()
//     double getMobilePrice()
//     void setMobileBrand(string)
//     void setMobileModelName(string)
//     void setMobilePrice(double)
// Write a main method to get the details from the user. Create an object for the Mobile class and set the values using the setter method. Then get the values using getters and display them as shown in the sample Input/Output.

// Note: Use the same attribute names and methods as given in the question. Use camel case notation [mixed case with the first letter lowercase and with the first letter of each internal word capitalized, Example: mobilePrice] for methods and variables.

// Note: Avoid the usage of exit(0) in your code.

#include <iostream>
using namespace std;

class Phone{
    
    private:    
        string phoneBrand;
        string phoneModelName;
        double phonePrice;
        
    public:    
        //Include Getters and setters for above variables.
        string GetPhoneBrand()
        {
            return phoneBrand;
        }

        string GetPhoneModelName()
        {
            return phoneModelName;
        }

        double GetPhonePrice()
        {
            return phonePrice;
        }

        void SetPhoneBrand(string brand)
        {
            phoneBrand = brand;
        }

        void SetPhoneModelName(string name)
        {
            phoneModelName = name;
        }

        void SetPhonePrice(double price)
        {
            phonePrice = price;
        }
};

int main()//DO NOT change the 'main' signature
{
        //Input statements are provided as part of the code skeleton
        string brand,model;
        double price;
        cout<<"Enter the Phone brand:"<<endl;
        cin>>brand;
        cout<<"Enter the Phone model name:"<<endl;
        cin>>model;
        cout<<"Enter the Phone price:"<<endl;
        cin>>price;

        Phone phone;

        phone.SetPhoneBrand(brand);
        phone.SetPhoneModelName(model);
        phone.SetPhonePrice(price);

        cout << "Phone Details" << endl;
        cout << "Phone Brand: " << phone.GetPhoneBrand() << endl;
        cout << "Phone Model Name: " << phone.GetPhoneModelName() << endl;
        cout << "Phone Price: " << phone.GetPhonePrice() << endl;
        
        //Fill the code here
        return 0;
}