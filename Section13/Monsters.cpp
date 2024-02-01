#include <iostream>
#include <string>
#include <string_view> // C++17

enum class MonsterType
{
	ogre,
	dragon,
	orc,
	giant_spider,
	slime,
};

struct Monster
{
	MonsterType type{};
	std::string_view name{};
	int health{};
};

constexpr std::string_view getMonsterTypeString(MonsterType type)
{
	switch (type)
	{
	case MonsterType::ogre:          return "Ogre";
	case MonsterType::dragon:        return "Dragon";
	case MonsterType::orc:           return "Orc";
	case MonsterType::giant_spider:  return "Giant Spider";
	case MonsterType::slime:         return "Slime";
	}

	return "Unknown";
}

void printMonster(const Monster& monster)
{
	std::cout << "This " << getMonsterTypeString(monster.type) <<
		" is named " << monster.name <<
		" and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre{ MonsterType::ogre, "Torg", 145 };
	Monster slime{ MonsterType::slime, "Blurp", 23 };

	printMonster(ogre);
	printMonster(slime);

	return 0;
}