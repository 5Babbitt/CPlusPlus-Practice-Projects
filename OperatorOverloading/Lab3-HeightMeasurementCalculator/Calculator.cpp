#include<iostream>
using namespace std;
//Provide Forward Delcaration of Height Here  

class Height  
{
    private:
        int feet;
        int inch;

    public:
        //Fill the code here
        Height(int feet, int inch)
        {
            this->feet = feet;
            this->inch = inch;
        }
        
        int getFeet()
        {
            return feet;
        }

        int getInch()
        {
            return inch;
        }

        void setFeet(int feet)
        {
            this->feet = feet;
        }

        void setInch(int inch)
        {
            this->inch = inch;
        }

        double calculateHeight()
        {
            double ft = feet;
            double in = inch / 10.0;

            return ft + in;
        }

        friend void toConvert(Height &ht);
};

class Converter
{
    private:
        int cm;
    public:
        //Fill the code here 
        Converter()
        {
            cm = 0;
        }

        int getCm()
        {
            return cm;
        }

        void setCm(int cm)
        {
            this->cm = cm;
        }

        void toConvert(Height &ht);
};