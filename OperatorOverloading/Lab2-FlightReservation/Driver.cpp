//IMPLEMENT METHOD 'calculateReimbursement' and 'main' IN THIS FILE
#include<iostream>
#include "Reservation.cpp"
using namespace std;

void CalculateReimbursement(Reservation &res)
{
    if (res.getTicketCost() < 6000)
    {
        res.discountPercentage = "No discount is available for you";
    }
    else
    {
        res.discountPercentage = "You are eligible for 5% discount";
    }
}

//Fill the code here
int main()
{
    int id,noOftickets;
    string name,food;
    double rate;

    cout<<"Enter the reservation id"<<endl;
    cin>>id;
    cout<<"Enter the reservation name"<<endl;
    cin>>name;
    cout<<"Enter number of tickets"<<endl;
    cin>>noOftickets;
    cout<<"Enter per ticket rate"<<endl;
    cin>>rate;
    cout<<"Enter type of food"<<endl;
    cin>>food;

    //Fill the code here
    Reservation res = Reservation(id, name, noOftickets, rate, food);
    res.CalculateTicketCost();
    CalculateReimbursement(res);

    cout << "Total ticket cost is " << res.getTicketCost() << " US Dollars" << endl;
    cout << res.getDiscountPercentage() << endl;

    return 0;
}
