//Implement the method 'toConvert' and main in this class
#include<iostream>
#include "Calculator.cpp"
using namespace std;

void Converter::toConvert(Height &ht)
{
    int val1 = ht.getFeet() * 30;
    int val2 = ht.getInch() * 3;

    cm = val1 + val2;
}

//Fill the code here
int main()
{
    int feet1,inch1;
    cout<<"Enter feet"<<endl;
    cin>>feet1;
    cout<<"Enter inch"<<endl;
    cin>>inch1;
    //Fill the code here
    Height ht = Height(feet1, inch1);

    cout << "Height entered is " << ht.calculateHeight() << "feet" << endl;
    
    Converter convertor = Converter();
    convertor.toConvert(ht);

    cout << "Height in cm is " << convertor.getCm() << "cm" << endl;

    return 0;
}