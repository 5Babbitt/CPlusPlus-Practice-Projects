#include<iostream>
using namespace std;

class Addition{
    private:
        int real;
        int img;
    public:
        Addition(int realNum, int imgNum)
        {
            real = realNum;
            img = imgNum;
        }

        friend class Operation;
};
