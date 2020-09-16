#include "Character.h"

// Setters
void Character::setName(string myName){
	this->myName = myName;
}

void Character::setMaxHP(int myMaxHP){
	this->myMaxHP = myMaxHP;
}
void Character::setHP(int myHP){
	this->myHP = myHP;
}

void Character::setSpd(int mySpd){
	this->mySpd = mySpd;
}

void Character::setStr(int myStr){
	this->myStr = myStr;
}

void Character::setDeathStatus(bool deathStatus){
	this->myMaxHP = myMaxHP;
}

// Getters
string Character::getName(){
	return this->myName;
}

int Character::getMaxHP() {
	return this->myMaxHP;
}

int Character::getHP(){
	return this->myHP;
}

int Character::getSpd(){
	return this->mySpd;
}
int Character::getStr(){
	return this->myStr;
}
