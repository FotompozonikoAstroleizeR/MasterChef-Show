#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Player{

   string name;
   string sex;
   string job;
   int age;
   int exhaustion;
   int wins;
   int popularity;
   int technicalExperience;

public:
   Player();
   Player(string name,string sex,string job,int age,int techicalExperience,int exhaustion,int popularity,int wins);
   ~Player();

   void setName(string n);
   void setSex(string s);
   void setJob(string j);
   void setAge(int a);
   void setTechicalExperience(int te);
   void setExhaustion(int ex);
   void setPopularity(int p);
   void setWins(int w);

   string getName();
   string getSex();
   string getJob();
   int    getAge();
   int    getTechnicalExperience();
   int    getExhaustion();
   int    getPopularity();
   int    getWins();


   void personalRelationships();
   void works(bool x);
   void eats();
   void sleeps();
   void votes();
   void competes();
   void endingOfWeek();

};
#endif // PLAYER_H_INCLUDED
