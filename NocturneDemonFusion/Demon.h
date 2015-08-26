#pragma once

#include <string>
#include <vector>

enum DemonType
{
	Deity = 0,
	Megami = 1,
	Fury = 2,
	Lady = 3,
	Kishin = 4,
	Holy = 5,
	Yoma = 6,
	Fairy = 7,
	Divine = 8,
	Fallen = 9,
	Snake = 10,
	Beast = 11,
	Jirae = 12,
	Brute = 13,
	Femme = 14,
	Vile = 15,
	Tyrant = 16,
	Night = 17,
	Wilder = 18,
	Haunt = 19,
	Foul = 20,
	Seraph = 21,
	Wargod = 22,
	Genma = 23,
	Dragon = 24,
	Avatar = 25,
	Avian = 26,
	Raptor = 27,
	Entity = 28,
	Fiend = 29,
	Elemental = 30,
	Mitama = 31,
	None = 32
};

// Just avoids having stds all over the place.
// There's a time and place for stds, its called netflix n chill
using namespace std;


extern string demonTypes[32];

class Demon
{
public:
	int level;				// The demons level, only used for finding fusion
	DemonType type;			// The demons type
	string name;			// The demons name
	bool isSpecialFusion;	// Do certain requirements need to be met to fuse this demon

	Demon();
	Demon(int level, DemonType type, string name, bool isSpecialFusion = false);

	string DemonString();

	~Demon();
};

vector<Demon> GetDemonList(DemonType ofType);	// Gets a certain type of demon
vector<Demon> GetDemonList();					// Gets ALL demons

DemonType GetDemonType(DemonType type1, DemonType type2);
