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
		Card(string name_in, string block_in, string artist_in, string color_in);
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
		Non-Land(int converted_mana_cost_in, string mana_cost_in, string effect_in, // fields unique to Non-Land
		string name_in, string block_in, string artist_in, string color_in) //fields inherited from Card
		: Card(name_in, block_in, artist_in, color_in);
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
		Creature(int power_in, int toughness_in, string type_in, // fields unique to creature
			int converted_mana_cost_in, string mana_cost_in, string effect_in, // fields inherited from Non-Land
			string name_in, string block_in, string artist_in, string color_in) //fields inherited from Card
			
			: Non-Land(converted_mana_cost_in, mana_cost_in, effect_in,
			name_in, block_in, artist_in, color_in);
		int get_power();
		int get_toughness();
		string get_type();
};

class Sorcery: public Non-Land{
	private:
	public:
};