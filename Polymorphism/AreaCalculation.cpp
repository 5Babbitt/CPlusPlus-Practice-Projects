#include <iostream>
#include<string>
using namespace std;

class Shape
{   
	//Fill code here
    public:
        double calculateArea();
};

class Circle : public Shape //Add required code 
{
    //Fill code here
    private:
        int radius;
    public:
        void setRadius(int rad)
        {
            radius = rad;
        }

        int getRadius()
        {
            return radius;
        }
        
        double calculateArea()
        {
            return 3.14 * radius * radius;
        }
};

class Rectangle : public Shape
{
	//Fill code here
    private:
        int width;
        int height;
    public:
        void setWidth(int value)
        {
            width = value;
        }

        void setHeight(int value)
        {
            height = value;
        }

        int getWidth()
        {
            return width;
        }

        int getHeight()
        {
            return height;
        }

        double calculateArea()
        {
            return width * height;
        }
};

class Triangle : public Shape
{
	//Fill code here
    private:
        float base;
        float height;
    public:
        void setBase(float value)
        {
            base = value;
        }

        void setHeight(float value)
        {
            height = value;
        }

        float getBase()
        {
            return base;
        }

        float getHeight()
        {
            return height;
        }
        
        double calculateArea()
        {
            return (base * height) / 2;
        }
};



int main()  //DO NOT change the 'main' signature
{  
    int radius;
    string shape;
	cout<<"Enter the type of shape:"<<endl;
	cin>>shape;
	double result;
	
	if(shape.compare("Circle") == 0)
    {
        Circle circle;
		int radius;
		cout<<"Enter the radius(in cm):"<<endl;
		cin>>radius;
        circle.setRadius(radius);
		//Fill the code
        result = circle.calculateArea();
	}
    else if (shape.compare("Rectangle") == 0)
    {
        Rectangle rect;
        int width, height;
        cout << "Enter the width (in cm):" << endl;
        cin >> width;
        rect.setWidth(width);
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        rect.setHeight(height);
        
        result = rect.calculateArea();
    }
    else if (shape.compare("Triangle") == 0)
    {
        Triangle triangle;
        float base, height;
        cout << "Enter the base (in cm): " << endl;
        cin >> base;
        triangle.setBase(base);
        cout << "Enter the height (in cm): " << endl;
        cin >> height;
        triangle.setHeight(height);
        result = triangle.calculateArea();
    }

    //Fill code here
    cout << "The area of the " << shape << " is: " << result << " square centimeters" << endl;
    return 0;
}