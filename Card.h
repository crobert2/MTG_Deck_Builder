#include <iostream>
#include <string>

using namespace std;

class Card{
	private:
		string name;
	public:
		Card();
		~Card();
};

class Land: public Card{

};

class Non-Land: public Card{
	private:
		int converted_mana_cost;
		string mana_cost;
		string color;
	public:
		int get_converted_mana_cost();
		string get_mana_cost();
		string get_color();
};

class Creature: public Non-Land{
	private:
		int power;
		int toughness;
		string type;
		string effect;
	public:
		int get_power();
		int get_toughness();
		string get_type();
		string get_effect();
};

class Sorcery: public Non-Land{
	private:
	public:
};