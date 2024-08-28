// class Shop is created with the given private attributes as a part of the code skeleton.

// string itemName
// int itemQuantity
// double itemPrice
// Include appropriate getters and setter methods as public. 

//     string getItemName()
//     int getItemQuantity()
//     double getItemPrice()
//     void setItemName(string)
//     void setItemQuantity(int)
//     void setItemPrice(double)
// Write a main method to  get the details from the user. Create an object for the Shop class and set the values using the setter methods. Then get the values using getters and display them as shown in the sample Input/Output.

// Note: Use the same attribute names and methods as given in the question. Use camel case notation [mixed case with the first letter lowercase and with the first letter of each internal word capitalized, Example:itemName] for methods and variables.

// Note: Avoid the usage of exit(0) in your code. 

#include <iostream>
using namespace std;

class Shop {

    private:
        string itemName;
        int itemQuantity;
        double itemPrice;

    public:
        //Getters and setters for above variables.string getItemName()
        string getItemName()
        {
            return itemName;
        }

        int getItemQuantity()
        {
            return itemQuantity;
        }

        double getItemPrice()
        {
            return itemPrice;
        }

        void setItemName(string name)
        {
            itemName = name;
        }

        void setItemQuantity(int quantity)
        {
            itemQuantity = quantity;
        }

        void setItemPrice(double price)
        {
            itemPrice = price;
        }
   
};

int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of code skeleton 
    string name;
    int quantity;
    double price;
    cout<<"Enter the item name:"<<endl;
    cin>>name;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    
    Shop shop;

    shop.setItemName(name);
    shop.setItemPrice(price);
    shop.setItemQuantity(quantity);

    cout << "Item Name: " << shop.getItemName() << endl;
    cout << "Item Quantity: " << shop.getItemQuantity() << endl;
    cout << "Item Price: " << shop.getItemPrice() << endl;

    //Fill the code here 
    return 0;
}