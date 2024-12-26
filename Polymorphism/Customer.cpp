#include <iostream>
#include<string>
using namespace std;

class Customer{   //DO NOT change the class name
	protected:
		string name;
		int units;
		string email;
	public:
		void setName(string n)
		{
			name = n;
		}

		string getName()
		{
			return name;
		}

		void setEmail(string e)
		{
			email = e;
		}

		string getEmail(){
			return email;
		}

		void setUnits(int unit)
		{
			units = unit;
		}

		int getUnits(){
			return units;
		}

		int calculateTariff();
};

class NormalCustomer : public Customer
{
	public:
		int calculateTariff()
		{
			return 0;
		}
};

class BrandCustomer : public Customer
{
    public:
		int calculateTariff()
		{
			return 100 + this->getUnits() * 2;
		}
};

class ExecutiveCustomer : public Customer
{
	public:
    	int calculateTariff()
		{
			return this->getUnits() * 5;
		}
};


int main()
{ 
    //DO NOT change the 'main' signature
    string name;
   	string email;
   	int units;
   	int type;

    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the emailId:"<<endl;
    cin>>email;
    cout<<"Enter the units:"<<endl;
    cin>>units;
    cout<<"Enter customer type:"<<endl;
    cin>>type;

	int tariff;

    if (type==1)
	{
        NormalCustomer obj;
        obj.setUnits(units);
        //fill code here
		tariff = obj.calculateTariff();
    }

	if (type == 2)
	{
		BrandCustomer obj;
		obj.setUnits(units);

		tariff = obj.calculateTariff();
	}

	if (type == 3)
	{
		ExecutiveCustomer obj;
		obj.setUnits(units);

		tariff = obj.calculateTariff();
	}

	cout << "Calculated Tariff(In US dollars): " << tariff << endl;

    //Fill code here
    return 0;
}
