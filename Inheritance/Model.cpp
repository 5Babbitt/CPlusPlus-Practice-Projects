// Helen is a top model and actress. She works in Advertisements and Movies. She needs a virtual assistant to help her to calculate total earnings. Help her with this by writing a C++ program.
// Make a virtual assistant for her using Hierarchical Inheritance.

// class Heroine with one protected attribute double earningsPerDay is created as a part of code skeleton.
// Included getter and setter method for the above variable as a part of code skeleton.
// Include the method with the name 'calcEarnings' has one parameter 'int noOfDays' with return type long.
// Functionality: calcEarnings method must return total earnings.
// Condition : totalEarnings = earningsPerDay * noOfDays;

// Create a class MovieHeroine that inherits the properties of the class Heroine and has one attribute int daysRun (number of days the movie run) as private and override the calcEarnings  method.
// Include appropriate getter and setter for the above attribute in MovieHeroine class as public.
// Method with the name 'calcEarnings' has one parameter 'int noOfDays' with return type long.
// Functionality: calcEarnings method has to return total earnings.
// Condition : totalEarnings =  earningsPerDay * noOfDays
// totalEarning=totalEarning+(totalEarning*extraPercentage/100)
// If the daysRun is greater than 100, 10% extra from the total earning, if it is greater than 50 and less than or equal to 100 then 5% extra from the total earning, if it is less than or equal to 50 no extra percentage of amount.

// Create a class AdvertisementModel that inherits the properties of the class Heroine and has one attribute int rating (rating for the advertisement) as private and override the calcEarnings  method.
// Include appropriate getter and setter for the above attribute in AdvertisementModel class as public.
//  Method with the name 'calcEarnings' has one parameter 'int noOfDays' with return type long.
// Functionality : calcEarnings method has to return total earnings.
// Condition : totalEarning=(earningsPerDay * noOfDays)+extraAmount
// If the rating is above 5, then extra amount of 10000 will be added with the total earning, if the rating is less than 5 and greater than 2 then extra amount of 5000 will be added with the total earning and if the rating is less than 2 then no extra amount

// Create a function main() to get input and print the output.

#include <iostream>
using namespace std;
 
class Heroine 
{
    protected:
        double earningsPerDay;
    public:
        void setEarningsPerDay(double earnings)
        {
            earningsPerDay=earnings;
        }
        double getEarningsPerDay()
        {
            return earningsPerDay;
        }
};
 
class MovieHeroine : public Heroine
{
    private: 
        int daysRun;
    public:
        void setDaysRun(int value)
        {
            this -> daysRun = value;
        }

        int getDaysRun()
        {
            return this -> daysRun;
        }

        long calcEarnings(int noOfDays)
        {
            //Implement your code
            long totalEarnings = earningsPerDay * noOfDays;
            int extraPercentage = 0;
            int days = getDaysRun();

            if (days > 100)
                extraPercentage = 10;
            else if (days > 50 && days <= 100)
                extraPercentage = 5;
            else
                extraPercentage = 0;

            totalEarnings = totalEarnings + (totalEarnings * extraPercentage / 100);

            return totalEarnings;
        }
};  

class AdvertisementModel : public Heroine
{
    private:
        int rating;
    public:
        void setRating(int value)
        {
            this -> rating = value;
        }

        int getRating()
        {
            return this -> rating;
        }

        long calcEarnings(int noOfDays)
        {
            //Implement your code
            long totalEarnings = earningsPerDay * noOfDays;
            int extraAmount = 0;
            int _rating = getRating();
            
            if (_rating > 5)
                extraAmount = 10000;
            else if (_rating > 2 && _rating <= 5)
                extraAmount = 5000;
            else
                extraAmount = 0;

            totalEarnings = (earningsPerDay * noOfDays) + extraAmount;

            return totalEarnings;
        }
};
// main function
int main()
{  
    int movie,ad,rating,daysRun;
    double earningsPerDay;
    cout<<"Enter the earnings per day :"<<endl;
    cin>>earningsPerDay;
   
    cout<<"Enter the number of days for movie :"<<endl;
    cin>>movie;
    cout<<"Enter the number of days movie run:"<<endl;
    cin>>daysRun;
    //Implement your code
   
    cout<<"Enter the number of days for advertisement  :"<<endl;
    cin>>ad;
    
    cout<<"Enter the Advertisement rating: "<<endl;
    cin>>rating;

    MovieHeroine movieHeroine;
    AdvertisementModel advertModel;

    movieHeroine.setDaysRun(daysRun);
    movieHeroine.setEarningsPerDay(earningsPerDay);

    advertModel.setRating(rating);
    advertModel.setEarningsPerDay(earningsPerDay);

    cout << "Earnings for Movie: " << movieHeroine.calcEarnings(movie) << endl;
    cout << "Earnings for Advertisement: " << advertModel.calcEarnings(ad) << endl;

    return 0;
}