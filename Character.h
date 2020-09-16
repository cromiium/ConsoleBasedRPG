#pragma once
#include <string>
using namespace std;

class Character{
private:
	string myName;
	int myMaxHP;
	int myHP;
	int myStr;
	int mySpd;
	bool deathStatus;

public:
	void setName(string myName);
	void setMaxHP(int myMaxHP);
	void setHP(int myHP);
	void setSpd(int mySpd);
	void setStr(int myStr);
	void setDeathStatus(bool deathStatus);


	string getName();
	int getMaxHP();
	int getHP();
	int getSpd();
	int getStr();
};
