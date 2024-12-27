//IMPLEMENT CLASS PRODUCT ONLY IN THIS FILE

#include<iostream>
using namespace std;
class Product 
{
    private:
        int productId;
        string productName;
        double quantity;
        double unitPrice;
    public:
        Product(){}
        //Fill the code here

        Product(int id, string name, double quantity, double unitPrice)
        {
            this->productId = id;
            this->productName = name;
            this->quantity = quantity;
            this->unitPrice = unitPrice;
        }

        int getProductId()
        {
            return productId;
        }

        string getProductName()
        {
            return productName;
        }

        double getQuantity()
        {
            return quantity;
        }

        double getUnitPrice()
        {
            return unitPrice;
        }

        void setProductId(int id)
        {
            productId = id;
        }

        void setProductName(string name)
        {
            productName = name;
        }

        void setQuantity(double value)
        {
            quantity = value;
        }

        void setUnitPrice(double price)
        {
            unitPrice = price;
        }

        double calculateBillAmount()
        {
            return quantity * unitPrice;
        }
        
        friend void setDiscount(Product &product, double discount);
};
