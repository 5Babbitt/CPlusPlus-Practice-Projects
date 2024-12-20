#include <iostream>
using namespace std;

int calculateScore(int sixers, int fours, int singles)
{
    int score = (sixers * 6) + (fours * 4) + singles;

    return score;
}

int calculateScore(int whiteCoins, int blackCoins, bool red)
{
    int score = (whiteCoins * 2) + blackCoins;
    
    if (red) 
    {
        score += 5;
    }

    return score;
}

int calculateScore(int goals, int fouls)
{
    int score = goals - fouls;

    return score;
}

int main()
{   //DO NOT change the 'main' signature
    int six,four,single,white,black,goals,fouls;
    bool red;
    cout<<"CRICKET:"<<endl;
    cout<<"Enter number of sixers : "<<endl;
    cin>>six;
    cout<<"Enter number of fours : "<<endl;
    cin>>four;
    cout<<"Enter number of singles : "<<endl;
    cin>>single;
    cout<<"CALCULATED SCORE : " << calculateScore(six, four, single) << endl;
    //fill the code here
    cout<<"CARROM:"<<endl;
    cout<<"Enter number of white coins pocket : "<<endl;
    cin>>white;
    cout<<"Enter number of black coins pocket : "<<endl;
    cin>>black;
    cout<<"Red Pocket(0/1): "<<endl;
    cin>>red;
    cout<<"CALCULATED SCORE : " << calculateScore(white, black, red) << endl;
    //fill the code here
    cout<<"BASKETBALL:"<<endl;
    cout<<"Enter number of goals : "<<endl;
    cin>>goals;
    cout<<"Enter number of fouls : "<<endl;
    cin>>fouls;
    cout<<"CALCULATED SCORE : " << calculateScore(goals, fouls) << endl;
    //fill the code here
    return 0;
}