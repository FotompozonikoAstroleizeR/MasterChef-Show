#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;


class Competition{

    int id;
    string name;
    string winner;

public:
    Competition();
    Competition(int id, string name);
    ~Competition();

//setters
    void setId(int id);
    void setName(string name);
    void setWinner(string winner);

//getters
    int getId();
    string getName();
    string getWinner();

    void status();

};






#endif // COMPETITION_H_INCLUDED
