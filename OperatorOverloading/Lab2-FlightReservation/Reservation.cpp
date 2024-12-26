//IMPLEMENT CLASS RESERVATION ONLY IN THIS FILE
#include<iostream>
using namespace std;

class Reservation
{
    private:
        int reservationId;

        string reservationName;
        int noOfTickets;
        double perTicketRate;
        string foodType;
        double ticketCost;
        string discountPercentage;
    public:
        //Fill the code here 
        Reservation(int id, string name, int numTickets, double rate, string food)
        {
            reservationId = id;
            reservationName = name;
            noOfTickets = numTickets;
            perTicketRate = rate;
            foodType = food;
        }

        int getReservationId()
        {
            return reservationId;
        }

        string getReservationName()
        {
            return reservationName;
        }

        int getNoOfTickets()
        {
            return noOfTickets;
        }

        double getPerTicketRate()
        {
            return perTicketRate;
        }

        string getFoodType()
        {
            return foodType;
        }

        double getTicketCost()
        {
            return ticketCost;
        }

        string getDiscountPercentage()
        {
            return discountPercentage;
        }

        void setReservationId(int id) 
        {
            reservationId = id;
        }

        void setReservationName(string name)
        {
            reservationName = name;
        }

        void setNoOfTickets(int num)
        {
            noOfTickets = num;
        }

        void setPerTicketRate(double rate)
        {
            perTicketRate = rate;
        }

        void setFoodType(string type)
        {
            foodType = type;
        }

        void setDiscountPercentage(string discount)
        {
            discountPercentage = discount;
        }

        void CalculateTicketCost()
        {
            int foodTypeRate;

            if (foodType == "VEG")
            {
                foodTypeRate = 150;
            }
            else if (foodType == "NONVEG")
            {
                foodTypeRate = 200;
            }

            int foodRate = foodTypeRate * noOfTickets;
            double ticketCharge = noOfTickets * perTicketRate;

            ticketCost = foodRate + ticketCharge;
        }

        friend void CalculateReimbursement(Reservation &res);
};
