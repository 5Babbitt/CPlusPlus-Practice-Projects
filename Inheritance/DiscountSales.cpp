#include <iostream>
using namespace std;
 
class Product
{
  protected:
    int markedPrice=1000;
    int discount=40;
    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice=mPrice;
        }
        void setDiscount(int dis)
        {
            discount=dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};
 
class Dress: public Product
{
    public:
        char findSize(int chestSize){
            char size;
            
            if (chestSize >= 20)
            {
                size = 'S';
            }

            if (chestSize > 30)
            {
                size = 'M';
            }

            if (chestSize > 40)
            {
                size = 'L';
            }

            return size;
        }

};
class Shirt: public Dress  
{
    public:
        int calculatePrice(char chestSize){
            markedPrice = markedPrice - (markedPrice * discount) / 100;

            if (chestSize == 'M')
            {
                markedPrice += 500;
            }

            if (chestSize == 'L')
            {
                markedPrice += 1000;
            }

            return markedPrice;
        }
};

// main function
int main()
{
    
    int size;
    cout<<"Enter the chest size : ";
    cin>>size;
   
    Shirt shirt;
    char sizeChar = shirt.findSize(size);
    
    cout << "Dress Size: " << sizeChar << endl;
    cout << "Price(in $): " << shirt.calculatePrice(sizeChar) << endl;

    return 0;
}