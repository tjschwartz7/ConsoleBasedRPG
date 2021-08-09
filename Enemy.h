#pragma once

#include"STLINCLUDE.h"


class Enemy
{
private:
	int level;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;
	float dropChance;
	int defence;
	int accuracy;
	int type1;
	std::string title;

public:
	Enemy(int type, int level = 0);
	virtual ~Enemy();

	inline bool isAlive() { return this->hp > 0; }
	std::string getAsString()const;
	void takeDamage(int damage);
	std::string getName(int type);

	enum type
	{
		FOREST = 0,
		PLAINS,
		SHORES,
		MAGMA,
		SKY,
		BEACH,
		DESERT,
		CAVERN,
		MOUNTAIN,
		
	};

	inline int getLevel()const { return this->level; }
	inline int getDamageMin()const { return this->damageMin; }
	inline int getDamageMax()const { return this->damageMax; }
	inline int getDamage()const { return rand() % this->damageMax + this->damageMin; }
	inline int getExp()const { return this->level * 100; }
	inline int getHp()const { return this->hp; }
	inline int getHpMax()const { return this->hpMax; }
	inline int getDefence()const { return this->defence; }
	inline int getAccuracy()const { return this->accuracy; }
	inline std::string getName()const { return this->title; }
};