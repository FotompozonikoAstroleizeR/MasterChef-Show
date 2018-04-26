#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include "Player.h"

#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Team{

    string color;
    int playersNum;
    int wins;
    Player players[11];

public:
    Team();
    Team(string color, int membersNum, int wins, Player players[]);
    ~Team();

    void setColor(string value);
    void setPlayersNum(int m);
    void setWins(int w);
    void setPlayers(Player a,int i);

    string getColor();
    int    getPlayersNum();
    int    getWins();
    Player getPlayers();

};

#endif // TEAM_H_INCLUDED
