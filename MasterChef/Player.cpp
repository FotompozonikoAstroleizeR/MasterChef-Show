#include "Player.h"

using namespace std;

Player::Player(){
	string name = "";
	string sex = "";
	string job = "";
	int age = 0;
	int exhaustion = 0;
	int wins = 0;
	int popularity = 50;
	int technicalExperience = rand() % 81 ;
}

Player::Player(string n, string s, string j, int a, int te, int e, int p=50, int w=rand() % 81){

	string name = n;
	string sex = s;
	string job = j;
	int age = a;
	int exhaustion = e;
	int wins = w;
	int popularity = p;
    int technicalExperience = te ;
}

Player::~Player(){

	//cout << "Player with name: " << name << " is destroyed!"<< endl;
}

void Player::setName(string n){
	name = n;
}

void Player::setJob(string j){
	job = j;
}

void Player::setSex(string s){
	sex = s;
}

void Player::setAge(int a){
	age = a;
}

void Player::setTechicalExperience(int te){
	technicalExperience = te;
}

void Player::setExhaustion(int ex){
	exhaustion = ex;
}

void Player::setPopularity(int p){
	popularity = p;
}

void Player::setWins(int w){
	wins = w;
}

string Player::getName(){
	return name;
}

string Player::getSex(){
	return sex;
}

string Player::getJob(){
	return job;
}

int Player::getAge(){
	return age;
}

int Player::getTechnicalExperience(){
	return technicalExperience;
}

int Player::getExhaustion(){
	return exhaustion;
}

int Player::getPopularity(){
	return popularity;
}

int Player::getWins(){
	return wins;
}

void Player::works(bool endOfWeek){
	technicalExperience += (5/100) * technicalExperience;
	exhaustion+=(rand() % 21 + 20); //20-40 % αυξηση

}

void Player::eats(){

}

void Player::sleeps(){
	exhaustion=0;
}

void Player::votes(){

}
void Player::competes(){
	exhaustion+=exhaustion*(rand()%11+10)/100;
}

void Player::personalRelationships(){
	popularity += (rand()%21 - 10)*popularity/100;
}

void Player::endingOfWeek(){
	int y = rand()%2;
	if(y=0)
	{
		sleeps();
	}
	else
	{
		technicalExperience += 5;
	}
}











