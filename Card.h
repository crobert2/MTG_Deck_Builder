#include <iostream>
#include <string>

using namespace std;

class Card{
	private:
		string name;
		string block;
		string artist;
		string color;
	public:
		Card();
		~Card();
		string get_name();
		string get_block();
		string get_artist();
		string get_color();
};

class Land: public Card{
	private:
	public:
};

class Non-Land: public Card{
	private:
		int converted_mana_cost;
		string mana_cost;
		string effect;
	public:
		int get_converted_mana_cost();
		string get_mana_cost();
		string get_effect();
};

class Creature: public Non-Land{
	private:
		int power;
		int toughness;
		string type;
	public:
		int get_power();
		int get_toughness();
		string get_type();
};

class Sorcery: public Non-Land{
	private:
	public:
};