#include "Team.h"

using namespace std;

Team::Team(){

    string color="";
    int playersNum = 0;
    int wins = 0;
    //Player * players = NULL;
    Player players[11] = {};

}

Team::Team(string c, int np, int w, Player players[11]){

    string color = c;
    int playersNum = np;
    int wins = w;
    players = new Player[11];

}
Team::~Team(){

	//cout << "Team with color: " << color << " is destroyed!"<< endl;
}

void Team::setColor(string value)
{
    color = value;
}

void Team::setPlayersNum(int np)
{
    playersNum = np;
}

void Team::setWins(int w)
{
    wins = w;
}

void Team::setPlayers(Player a,int i)
{
    Player players[i]=a;

}

string Team::getColor()
{
    return color;
}

int Team::getPlayersNum()
{
    return playersNum;
}

int Team::getWins()
{
    return wins;
}

Player Team::getPlayers()
{
    return players[0];
}


