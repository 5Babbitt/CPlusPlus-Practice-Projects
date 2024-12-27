#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class MonthlyExpense {

    private:
        double household_exp;
        double medical;
    public:
        void setHouseHoldExpense(double houseExp) 
        {
            //Implement your code
            this->household_exp = houseExp;
        }
       
        void setMedicalExpense(double medical) 
        {
            //Implement your code
            this->medical = medical;
        }


        double calculateNovemberMonthExpense() 
        {
            //Implement your code
            return household_exp + medical;
        }


        double calculateDecemberMonthExpense() 
        {
            //Implement your code
            return household_exp + medical;
        }


        double calculateTotalExpense() 
        {
            //Implement your code
            return household_exp + medical;
        }
    
        MonthlyExpense operator +(const MonthlyExpense b)
        {
            MonthlyExpense expense;
            //Implement your code
            expense.setHouseHoldExpense(household_exp + b.household_exp);
            expense.setMedicalExpense(medical + b.medical);

            return expense;
        }

};


int main() {
    
    double expenses = 0.0;
    double novHousHol1,novMedEx2,decHousHol1,decMedEx2;
    
    cout<<"Enter the House hold expense of November(in $)  :";
    cin>>novHousHol1;
    cout<<"Enter the Medical expense of November(in $)  :";
    cin>>novMedEx2;
    cout<<"Enter the House hold expense of December(in $) :";
    cin>>decHousHol1;
    cout<<"Enter the Medical expense of December(in $) :";
    cin>>decMedEx2;
    //Implement your code

    MonthlyExpense novExpense;
    novExpense.setHouseHoldExpense(novHousHol1);
    novExpense.setMedicalExpense(novMedEx2);
    expenses = novExpense.calculateNovemberMonthExpense();
    cout << "November Expenses (in $) : " << expenses << endl;
    
    MonthlyExpense decExpense;
    decExpense.setHouseHoldExpense(decHousHol1);
    decExpense.setMedicalExpense(decMedEx2);
    expenses = decExpense.calculateDecemberMonthExpense();
    cout << "December Expenses (in $) : " << expenses << endl;

    MonthlyExpense totalExpense = novExpense + decExpense;
    expenses = totalExpense.calculateTotalExpense();
    cout << "Total Expenses for the month of Nov and Dec (in $) : " << expenses << endl;

    return 0;
}