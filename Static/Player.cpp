// class Player with the given private member variables is created as part of the code skeleton.

//     int playerID
//     string playerName
//     int playedMatches
//     int playerScore
// Include appropriate public getters methods in the Player class.

// Write a public  parameterized constructor in the Player class that takes 3 arguments playerID, playerName and playerScore.

// Display the above player details in the displayThreeArgument method which is provided as part of code skeleton

// Write another public parameterized constructor in the Player class that takes 4 arguments - playerID, playerName, playedMatches and playerScore.

// Display the above player details in the displayFourArgument method which is provided as part of code skeleton

// Write the destructor for the Player Class. Inside the destructor display the message as "Destructor Called".

// Implement the main method and test the two methods(displayThreeArgument,displayFourArgument).

// Note: Avoid the usage of exit(0) in your code.

// Sample Output:

// Player ID. : 1001                                                              
// Player Name : John                                                             
// Player Score : 130  

// Player ID. : 1002                                                              
// Player Name : Raj                                                              
// Played Matches : 100                                                           
// Player Score : 5000                                                            

// Destructor Called                                                                     
// Destructor Called           

#include<iostream>
using namespace std;

class Player //DO NOT change the class name
{
    private:
        int playerID;
        string playerName;
        int playedMatches;
        int playerScore;

    public:

        //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
        Player(int id, string name, int score)
        {
            playerID = id;
            playerName = name;
            playerScore = score;
        }

        //Implement a parameterized constructor for 4 arguments - playerID, playerName,playedMatches and playerScore.
        Player(int id, string name, int matches, int score)
        {
            playerID = id;
            playerName = name;
            playedMatches = matches;
            playerScore = score;
        }

        int getPlayerID()
        {
            return playerID;
        }

        string getPlayerName()
        {
            return playerName;
        }

        int getPlayedMatches()
        {
            return playedMatches;
        }

        int getPlayerScore()
        {
            return playerScore;
        }

        void displayThreeArgument()
        {       
            //Implement your code here
            cout << "Player ID. : " << playerID << endl;
            cout << "Player Name : " << playerName << endl;
            cout << "Player Score : " << playerScore << endl;
        }


        void displayFourArgument()
        {
            //Implement your code here
            cout << "Player ID. : " << playerID << endl;
            cout << "Player Name : " << playerName << endl;
            cout << "Played Matches : " << playedMatches << endl;
            cout << "Player Score : " << playerScore << endl;
        }

        //Implement Destructor here
        ~Player()
        {
            cout << "Destructor Called" << endl;
        }

};
int main(){
    //Implement your code here
    Player playerOne = Player(1001, "John", 130);
    Player playerTwo = Player(1002, "Raj", 100, 5000);

    playerOne.displayThreeArgument();
    playerTwo.displayFourArgument();

    return 0;
}