// John is appointed as the new Election Commissioner. He needs to make the election process easier and faster. To achieve these objectives, he needs an application to calculate the percentage of votes in all categories.

// Develop an application using Single Inheritance in C++.

// class Election  is created with the below three  protected attributes 

// long int totalPeople 
// long int noOfWomen 
// long int noOfMen
// Getters and setters are also provided as part of the code skeleton

// Create a class GeneralElection and inherit the properties of class Election and implement the given methods as public:

// 1.      Method with name 'calcVotePercentage' has two parameters 'int partyA , int partyB' with return type double.
//           Functionality : calcVotePercentage method has to calculate the vote percentage. People voted for two parties A and B, Some did not cast their votes. Calculate the vote percentage using the given formula,  ( ( (partyA+partyB) *100 ) /totalPeople)
// 2.      Method with the name 'calcWomenVotePercentage' has one parameter 'int womenVotes' with return type double.
//          Functionality : calcWomenVotePercentage method has to calculate and return the vote percentage of  women, ((womenVotes*100) /noOfWomen) 
// 3.      Method with name 'calcMenVotePercentage' has one parameter 'int menVotes' with return type double. functionality : calcMenVotePercentage method has to calculate and return the vote percentage of men, ((menVotes*100) /noOfMen)

// Create a function main() to get input and print the output as shown in the sample output.
// Note: Avoid the usage of exit(0) in your code.  

// Sample Input 1:

// Enter the number of People: 100000
// Enter the number of women: 50000 
// Enter the number of men: 50000
// Enter the total votes by Party A: 40000
// Enter the total votes by Party B: 30000
// Enter the number of women votes: 30000 
// Enter the number of men votes: 33000

// Sample Output 1:

// Vote Percentage: 70
// Women Vote Percentage: 60
// Men Vote Percentage: 66

// Sample Input 2:

// Enter the number of People: 500
// Enter the number of women: 150 
// Enter the number of men: 350
// Enter the total votes by Party A: 200
// Enter the total votes by Party B: 100
// Enter the number of women votes: 75 
// Enter the number of men votes: 210

// Sample Output 2:

// Vote Percentage: 60
// Women Vote Percentage: 50
// Men Vote Percentage: 60

#include <iostream>
using namespace std;
 
class Election 
{
    protected:
        long int totalPeople;
        long int noOfWomen;
        long int noOfMen;
    public:
        void setTotalPeople(long int totPeople)
        {
            this->totalPeople=totPeople;
        }

        void setNoOfWomen(long int womenCount)
        {
            this->noOfWomen=womenCount;
        }

        void setNoOfMen(long int menCount)
        {
            this->noOfMen=menCount;
        }

        long int getTotalPeople()
        {
            return this->totalPeople;
        }

        long int getNoOfWomen()
        {
            return this->noOfWomen;
        }

        long int getNoOfMen()
        {
            return this->noOfMen;
        }

};
 
class GeneralElection : public Election
{
    public:
        double calcVotePercentage(int partyA , int partyB)
        {
            //Implement your code
            double percentage = ((partyA + partyB) * 100 ) / getTotalPeople();

            return percentage;
        }
        
        double calcWomenVotePercentage(int womenVotes)
        {
            //Implement your code
            double percentage = (womenVotes * 100) / getNoOfWomen();

            return percentage;
        }

        double calcMenVotePercentage(int menVotes)
        {
            //Implement your code
            double percentage = (menVotes * 100) / getNoOfMen();

            return percentage;
        }
};


// main function
int main()
{  
    //Implement your code
    long int totalPeople,noOfWomen,noOfMen;
    int partyA,partyB,womenVotes,menVotes;
    double votePer,womenVotePer,menVotePer;

    cout<<"Enter the number of People:";
    cin>>totalPeople;
    cout<<"Enter the number of women:";
    cin>>noOfWomen;
    cout<<"Enter the number of men:";
    cin>>noOfMen;
    cout<<"Enter the total votes by Party A:";
    cin>>partyA;
    cout<<"Enter the total votes by Party B:";
    cin>>partyB;
    cout<<"Enter the number of women votes:";
    cin>>womenVotes;
    cout<<"Enter the number of men votes:";
    cin>>menVotes;

    GeneralElection election;

    election.setTotalPeople(totalPeople);
    election.setNoOfWomen(noOfWomen);
    election.setNoOfMen(noOfMen);

    cout << "Vote Percentage: " << election.calcVotePercentage(partyA, partyB) << endl;
    cout << "Women Vote Percentage: " << election.calcWomenVotePercentage(womenVotes) << endl;
    cout << "Men Vote Percentage: " << election.calcMenVotePercentage(menVotes) << endl;

    //fill the code here
    return 0;
}