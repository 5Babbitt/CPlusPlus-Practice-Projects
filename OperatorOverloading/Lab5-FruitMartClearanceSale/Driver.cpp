//IMPLEMENT METHOD 'setDiscount' and 'main' IN THIS FILE

#include<iostream>
#include "Product.cpp"
using namespace std;

//Fill the code here 
void setDiscount(Product &product, double discount)
{
    double newUnitPrice = product.unitPrice * discount/100;

    product.unitPrice = product.unitPrice - newUnitPrice;
}

int main()
{
    int productId;
    string productName;
    double quantity,unitPrice,discount;
    cout<<"Enter the product Id"<<endl;
    cin>>productId;
    cout<<"Enter the product Name"<<endl;
    cin>>productName;
    cout<<"Enter the quantity in kgs"<<endl;
    cin>>quantity;
    cout<<"Enter the unit price per kg"<<endl;
    cin>>unitPrice;
    //Fill the code here 
    Product prod = Product(productId, productName, quantity, unitPrice);

    cout<<"Enter the discount percentage"<<endl;
    cin>>discount;
    //Fill the code here
    setDiscount(prod, discount);

    cout << "After discount, bill amount of Product id " << productId << " is " << prod.calculateBillAmount() << " US Dollars" << endl;

    return 0;
}
