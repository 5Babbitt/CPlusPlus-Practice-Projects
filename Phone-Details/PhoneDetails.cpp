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