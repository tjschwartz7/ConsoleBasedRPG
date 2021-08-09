#include "Enemy.h"
#include"Worldspace.h"

Enemy::Enemy(int type1, int level)
{
	

	this->level = level;
	this->hpMax = rand() % (level * 10) + (level * 2);
	this->hp = this->hpMax;
	this->damageMin = this->level * 1;
	this->damageMax = this->level * 2;
	this->dropChance = rand() % 100 + 1;
	this->defence = rand() % level * 5 + 1;
	this->accuracy = rand() % level * 5 + 1;
	this->type1 = type1;
	this->title = getName(type1);
	
}

Enemy::~Enemy()
{

}

std::string Enemy::getAsString()const
{
	return title + " - Level: " + std::to_string(this->level) + "\n" +
		"Hp: " + std::to_string(this->hp) + " / " + std::to_string(this->hpMax) + "\n" +
		"Damage: " + std::to_string(this->damageMin) + " - " + std::to_string(this->damageMax) + "\n" +
		"Defence: " + std::to_string(this->defence) + "\n" +
		"Accuracy: " + std::to_string(this->accuracy) + "\n" +
		"Drop chance: " + std::to_string(this->dropChance) + "\n";
}

void Enemy::takeDamage(int damage)
{
	this->hp -= damage;

	if (this->hp <= 0)
	{
		this->hp = 0;
	}
}



std::string Enemy::getName(int type)
{
	std::string enemyTitle = "";
	int i = rand() % 20;
	switch (type)
	{
	case 0:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Wolf";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Wood Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Giant Leaf Spider";
			break;
		case 3:
		case 13:
			enemyTitle = "Bandit";
			break;
		case 4:
		case 12:
			enemyTitle = "Giant Bear";
			break;
		case 5:
		case 11:
			enemyTitle = "Bandit Archer";
			break;
		case 6:
			enemyTitle = "Man-Eating Ape";
			break;
		case 7:
			enemyTitle = "Skeleton";
			break;
		case 8:
			enemyTitle = "Undead Ogre";
			break;
		case 9:
			enemyTitle = "Walking Corpse";
			break;
		case 10:
			enemyTitle = "Vampire";
			break;

		}

		break;
	case 1:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Wolf";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Massive Vulture";
			break;
		case 3:
		case 13:
			enemyTitle = "Bandit";
			break;
		case 4:
		case 12:
			enemyTitle = "Horned Bull";
			break;
		case 5:
		case 11:
			enemyTitle = "Bandit Archer";
			break;
		case 6:
			enemyTitle = "Ogre Archer";
			break;
		case 7:
			enemyTitle = "Skeleton";
			break;
		case 8:
			enemyTitle = "Undead Ogre";
			break;
		case 9:
			enemyTitle = "Walking Corpse";
			break;
		case 10:
			enemyTitle = "Maneating Bird";
			break;

		}
		break;
	case 2:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Giant Crab";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Water Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Evil Seal";
			break;
		case 3:
		case 13:
			enemyTitle = "Beach Bandit";
			break;
		case 4:
		case 12:
			enemyTitle = "Sand Rock Monster";
			break;
		case 5:
		case 11:
			enemyTitle = "Beach Bandit Archer";
			break;
		case 6:
			enemyTitle = "Sand Creature";
			break;
		case 7:
			enemyTitle = "Beach Skeleton";
			break;
		case 8:
			enemyTitle = "Coastal Vampire";
			break;
		case 9:
			enemyTitle = "Lake Monster";
			break;
		case 10:
			enemyTitle = "Giant Reptile";
			break;

		}
		break;
	case 3:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Magmast";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Magma Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Giant Magma Spider";
			break;
		case 3:
		case 13:
			enemyTitle = "Ignacio-Clan Bandit";
			break;
		case 4:
		case 12:
			enemyTitle = "Fire Tyrant";
			break;
		case 5:
		case 11:
			enemyTitle = "ignacio-Clan Bandit Archer";
			break;
		case 6:
			enemyTitle = "Sentient Flame";
			break;
		case 7:
			enemyTitle = "Armored Skeleton";
			break;
		case 8:
			enemyTitle = "Armored Undead";
			break;
		case 9:
			enemyTitle = "Scorched Vampire";
			break;
		case 10:
			enemyTitle = "Magma Blob";
			break;

		}
		break;
	case 4:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Sentient Cloud";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Thunder Cloud";
			break;
		case 2:
		case 14:
			enemyTitle = "Sky Spider";
			break;
		case 3:
		case 13:
			enemyTitle = "Water Viper";
			break;
		case 4:
		case 12:
			enemyTitle = "Thunderbird";
			break;
		case 5:
		case 11:
			enemyTitle = "Airsnake";
			break;
		case 6:
			enemyTitle = "Man-Eating Cloudthing";
			break;
		case 7:
			enemyTitle = "Skeletal Bird";
			break;
		case 8:
			enemyTitle = "Skyblob";
			break;
		case 9:
			enemyTitle = "Giant Vulture";
			break;
		case 10:
			enemyTitle = "Ugly Skyfish";
			break;

		}
		break;
	case 5:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Giant Crab";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Water Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Evil Seal";
			break;
		case 3:
		case 13:
			enemyTitle = "Beach Bandit";
			break;
		case 4:
		case 12:
			enemyTitle = "Beach Demon";
			break;
		case 5:
		case 11:
			enemyTitle = "Beach Bandit Archer";
			break;
		case 6:
			enemyTitle = "Sand Creature";
			break;
		case 7:
			enemyTitle = "Beach Skeleton";
			break;
		case 8:
			enemyTitle = "Beachclaw";
			break;
		case 9:
			enemyTitle = "Oceanman";
			break;
		case 10:
			enemyTitle = "Giant Reptile";
			break;

		}
		break;
	case 6:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Cactus Creature";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Desert Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Dry Sandbeast";
			break;
		case 3:
		case 13:
			enemyTitle = "Heatseeker Bandits";
			break;
		case 4:
		case 12:
			enemyTitle = "Sand Rock Monster";
			break;
		case 5:
		case 11:
			enemyTitle = "Heatseeker Archer";
			break;
		case 6:
			enemyTitle = "Sand Creature";
			break;
		case 7:
			enemyTitle = "Sand Skeleton";
			break;
		case 8:
			enemyTitle = "Desert Vampire";
			break;
		case 9:
			enemyTitle = "Desert Vulture";
			break;
		case 10:
			enemyTitle = "Sand Reptile";
			break;

		}
		break;
	case 7:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Massive Bat";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Albino Ogre";
			break;
		case 2:
		case 14:
			enemyTitle = "Cave Dweller";
			break;
		case 3:
		case 13:
			enemyTitle = "Giant Cavebug";
			break;
		case 4:
		case 12:
			enemyTitle = "Rock Golem";
			break;
		case 5:
		case 11:
			enemyTitle = "Albino Cave Spider";
			break;
		case 6:
			enemyTitle = "Cave Demon";
			break;
		case 7:
			enemyTitle = "Skeleton";
			break;
		case 8:
			enemyTitle = "Vampire";
			break;
		case 9:
			enemyTitle = "Demonic Spider";
			break;
		case 10:
			enemyTitle = "Rockshifter";
			break;

		}
		break;

	case 8:
		switch (i)
		{
		case 0:
		case 16:
		case 17:
		case 18:
			enemyTitle = "Mountain Ogre";
			break;
		case 1:
		case 15:
		case 19:
			enemyTitle = "Mountain Vulture";
			break;
		case 2:
		case 14:
			enemyTitle = "Cave Dweller";
			break;
		case 3:
		case 13:
			enemyTitle = "Rock Golem";
			break;
		case 4:
		case 12:
			enemyTitle = "Rock Monster";
			break;
		case 5:
		case 11:
			enemyTitle = "Albino Cave Spider";
			break;
		case 6:
			enemyTitle = "Cave Demon";
			break;
		case 7:
			enemyTitle = "Skeleton";
			break;
		case 8:
			enemyTitle = "Vampire";
			break;
		case 9:
			enemyTitle = "Demonic Goat";
			break;
		case 10:
			enemyTitle = "Rockshifter";
			break;

		}
		break;


	}
	return enemyTitle;
}