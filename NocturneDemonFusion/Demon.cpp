#include "stdafx.h"
#include "Demon.h"


Demon::Demon()
{
}

Demon::Demon(int level, DemonType type, string name, bool isSpecialFusion = false)
{
	this->level = level;
	this->type = type;
	this->name = name;
	this->isSpecialFusion = isSpecialFusion;
}

string Demon::DemonString()
{
	return "lvl " + to_string(level) + " " + demonTypes[(int)type] + " " + name + ".";
}


Demon::~Demon()
{
}

vector<Demon> GetDemonList(DemonType ofType)
{
	vector<Demon> demonList;

	switch (ofType)
	{
	// Do dark demons first
	case Foul:
		demonList.push_back(Demon(1, Foul, "Will O Wisp"));
		demonList.push_back(Demon(6, Foul, "Slime"));
		demonList.push_back(Demon(7, Foul, "Mou-Ryo"));
		demonList.push_back(Demon(16, Foul, "Blob"));
		demonList.push_back(Demon(28, Foul, "Black Ooze"));
		demonList.push_back(Demon(42, Foul, "Phantom"));
		demonList.push_back(Demon(45, Foul, "Sakahagi", true));
		demonList.push_back(Demon(52, Foul, "Shadow"));
		break;
	case Haunt:
		demonList.push_back(Demon(4, Haunt, "Preta"));
		demonList.push_back(Demon(11, Haunt, "Choronzon"));
		demonList.push_back(Demon(17, Haunt, "Yaka"));
		demonList.push_back(Demon(20, Haunt, "Chatterskull"));
		demonList.push_back(Demon(28, Haunt, "Pisaca"));
		demonList.push_back(Demon(49, Haunt, "Legion"));
		demonList.push_back(Demon(63, Haunt, "Rakshasa"));
		break;
	case Raptor:
		demonList.push_back(Demon(63, Raptor, "Gurr"));
		break;
	case Tyrant:
		demonList.push_back(Demon(52, Tyrant, "Loki"));
		demonList.push_back(Demon(69, Tyrant, "Abaddon"));
		demonList.push_back(Demon(74, Tyrant, "Surt"));
		demonList.push_back(Demon(77, Tyrant, "Aciel"));
		demonList.push_back(Demon(84, Tyrant, "Beelzebub(Human)"));
		demonList.push_back(Demon(91, Tyrant, "Mot"));
		demonList.push_back(Demon(95, Tyrant, "Beelzebub(Fly)"));
		break;
	case Vile:
		demonList.push_back(Demon(30, Vile, "Arahabaki"));
		demonList.push_back(Demon(33, Vile, "Baphomet"));
		demonList.push_back(Demon(45, Vile, "Pazuzu"));
		demonList.push_back(Demon(58, Vile, "Girimehkala"));
		demonList.push_back(Demon(65, Vile, "Tao Tio"));
		demonList.push_back(Demon(73, Vile, "Samael"));
		demonList.push_back(Demon(83, Vile, "Mada"));
		break;
	case Wilder:
		demonList.push_back(Demon(6, Wilder, "Zhen"));
		demonList.push_back(Demon(15, Wilder, "Bicorn"));
		demonList.push_back(Demon(25, Wilder, "Raiju"));
		demonList.push_back(Demon(31, Wilder, "Nue"));
		demonList.push_back(Demon(43, Wilder, "Mothman"));
		demonList.push_back(Demon(75, Wilder, "Hresvelgr"));
		break;
	
	// Light
	case Avatar:
		demonList.push_back(Demon(24, Avatar, "Makami"));
		demonList.push_back(Demon(26, Avatar, "Cai-Zhi"));
		demonList.push_back(Demon(46, Avatar, "Yatagarasu"));
		demonList.push_back(Demon(60, Avatar, "Barong"));
		break;
	case Avian:
		demonList.push_back(Demon(63, Avian, "Garuda"));
		break;
	case Deity:
		demonList.push_back(Demon(38, Deity, "Horus"));
		demonList.push_back(Demon(47, Deity, "Atavaka"));
		demonList.push_back(Demon(56, Deity, "Amaterasu"));
		demonList.push_back(Demon(65, Deity, "Odin"));
		demonList.push_back(Demon(78, Deity, "Mithra"));
		demonList.push_back(Demon(93, Deity, "Vishnu"));
		break;
	case Dragon:
		demonList.push_back(Demon(30, Dragon, "Gui Xian"));
		demonList.push_back(Demon(44, Dragon, "Long"));
		break;
	case Elemental:
		demonList.push_back(Demon(7, Elemental, "Erthys"));
		demonList.push_back(Demon(11, Elemental, "Aeros"));
		demonList.push_back(Demon(15, Elemental, "Aquans"));
		demonList.push_back(Demon(20, Elemental, "Flaemis"));
		break;
	case Entity:
		demonList.push_back(Demon(64, Entity, "Albion"));
		break;
	case Fury:
		demonList.push_back(Demon(44, Fury, "Dionysus"));
		demonList.push_back(Demon(54, Fury, "Wu Kong"));
		demonList.push_back(Demon(61, Fury, "Beiji-Weng"));
		demonList.push_back(Demon(94, Fury, "Shiva"));
		break;
	case Genma:
		demonList.push_back(Demon(38, Genma, "Kurama"));
		demonList.push_back(Demon(46, Genma, "Hanuman"));
		demonList.push_back(Demon(52, Genma, "Cu Chulainn"));
		break;
	case Holy:
		demonList.push_back(Demon(13, Holy, "Shiisaa"));
		demonList.push_back(Demon(21, Holy, "Unicorn"));
		demonList.push_back(Demon(27, Holy, "Senri"));
		demonList.push_back(Demon(36, Holy, "Feng Huang"));
		demonList.push_back(Demon(43, Holy, "Baihu"));
		demonList.push_back(Demon(55, Holy, "Chimera"));
		break;
	case Kishin:
		demonList.push_back(Demon(17, Kishin, "Minkata"));
		demonList.push_back(Demon(27, Kishin, "Zouchou"));
		demonList.push_back(Demon(33, Kishin, "Komoku"));
		demonList.push_back(Demon(39, Kishin, "Okuninushi"));
		demonList.push_back(Demon(45, Kishin, "Mikazuchi"));
		demonList.push_back(Demon(52, Kishin, "Jikoku"));
		demonList.push_back(Demon(63, Kishin, "Futomimi", true));
		demonList.push_back(Demon(72, Kishin, "Bishamon"));
		demonList.push_back(Demon(76, Kishin, "Thor"));
	case Lady:
		demonList.push_back(Demon(24, Lady, "Kikuri-Hime"));
		demonList.push_back(Demon(41, Lady, "Kushinada"));
		demonList.push_back(Demon(57, Lady, "Parvati"));
		demonList.push_back(Demon(67, Lady, "Kali"));
		demonList.push_back(Demon(74, Lady, "Skadi"));
		break;
	case Megami:
		demonList.push_back(Demon(18, Megami, "Uzume"));
		demonList.push_back(Demon(30, Megami, "Sarsvati"));
		demonList.push_back(Demon(48, Megami, "Sati"));
		demonList.push_back(Demon(54, Megami, "Lakshmi"));
		demonList.push_back(Demon(64, Megami, "Scathach"));
		break;
	case Seraph:
		demonList.push_back(Demon(73, Seraph, "Uriel"));
		demonList.push_back(Demon(84, Seraph, "Raphael"));
		demonList.push_back(Demon(87, Seraph, "Gabriel"));
		demonList.push_back(Demon(90, Seraph, "Michael"));
		demonList.push_back(Demon(95, Seraph, "Metatron", true));
		break;
	case Wargod:
		demonList.push_back(Demon(33, Wargod, "Ganesha"));
		demonList.push_back(Demon(58, Wargod, "Valkyrie"));
		break;

	// Neutral
	case Beast:
		demonList.push_back(Demon(13, Beast, "Inugami"));
		demonList.push_back(Demon(18, Beast, "Nekomata"));
		demonList.push_back(Demon(23, Beast, "Badb Catha"));
		demonList.push_back(Demon(34, Beast, "Orthrus"));
		demonList.push_back(Demon(54, Beast, "Sparna"));
		demonList.push_back(Demon(61, Beast, "Cerburus"));
		break;
	case Brute:
		demonList.push_back(Demon(4, Brute, "Shikigami"));
		demonList.push_back(Demon(20, Brute, "Momunofu"));
		demonList.push_back(Demon(25, Brute, "Oni"));
		demonList.push_back(Demon(44, Brute, "Ikusa"));
		demonList.push_back(Demon(54, Brute, "Shiki-Ouji"));
		demonList.push_back(Demon(59, Brute, "Kin-Ki"));
		demonList.push_back(Demon(62, Brute, "Sui-Ki"));
		demonList.push_back(Demon(66, Brute, "Fuu-Ki"));
		demonList.push_back(Demon(81, Brute, "Ongyo-Ki", true));
		break;
	case Divine:
		demonList.push_back(Demon(11, Divine, "Angel"));
		demonList.push_back(Demon(18, Divine, "Archangel"));
		demonList.push_back(Demon(28, Divine, "Principality"));
		demonList.push_back(Demon(33, Divine, "Power"));
		demonList.push_back(Demon(41, Divine, "Virtue"));
		demonList.push_back(Demon(50, Divine, "Dominion"));
		demonList.push_back(Demon(64, Divine, "Throne"));
		break;
	case Fairy:
		demonList.push_back(Demon(2, Fairy, "Pixie"));
		demonList.push_back(Demon(7, Fairy, "Jack Frost"));
		demonList.push_back(Demon(10, Fairy, "High Pixie"));
		demonList.push_back(Demon(19, Fairy, "Pyro Jack"));
		demonList.push_back(Demon(26, Fairy, "Kelpie"));
		demonList.push_back(Demon(38, Fairy, "Troll"));
		demonList.push_back(Demon(43, Fairy, "Setanta"));
		demonList.push_back(Demon(46, Fairy, "Oberon"));
		demonList.push_back(Demon(57, Fairy, "Titania"));
		break;
	case Fallen:
		demonList.push_back(Demon(20, Fallen, "Forneus"));
		demonList.push_back(Demon(29, Fallen, "Eligor"));
		demonList.push_back(Demon(37, Fallen, "Berith"));
		demonList.push_back(Demon(45, Fallen, "Ose"));
		demonList.push_back(Demon(58, Fallen, "Decarabia"));
		demonList.push_back(Demon(68, Fallen, "Flauros"));
		break;
	case Femme:
		demonList.push_back(Demon(7, Femme, "Datsue-Ba"));
		demonList.push_back(Demon(20, Femme, "Taraka"));
		demonList.push_back(Demon(32, Femme, "Shikome"));
		demonList.push_back(Demon(43, Femme, "Yaksini"));
		demonList.push_back(Demon(52, Femme, "Dakini"));
		demonList.push_back(Demon(58, Femme, "Clotho"));
		demonList.push_back(Demon(63, Femme, "Lachesis"));
		demonList.push_back(Demon(67, Femme, "Atropos"));
		demonList.push_back(Demon(72, Femme, "Rangda"));
		break;
	case Fiend:	// Either can't be summoned, or need Deathstones
		demonList.push_back(Demon(30, Fiend, "Matador"));
		demonList.push_back(Demon(37, Fiend, "Daisoujou"));
		demonList.push_back(Demon(42, Fiend, "Hell Biker"));
		demonList.push_back(Demon(52, Fiend, "White Rider"));
		demonList.push_back(Demon(55, Fiend, "Red Rider"));
		demonList.push_back(Demon(61, Fiend, "Black Rider"));
		demonList.push_back(Demon(63, Fiend, "Pale Rider"));
		demonList.push_back(Demon(69, Fiend, "The Harlot"));
		demonList.push_back(Demon(77, Fiend, "Trumpeter"));
		demonList.push_back(Demon(80, Fiend, "Dante"));
		break;
	case Jirae:
		demonList.push_back(Demon(3, Jirae, "Kodama"));
		demonList.push_back(Demon(5, Jirae, "Hua Po"));
		demonList.push_back(Demon(13, Jirae, "Sudama"));
		demonList.push_back(Demon(35, Jirae, "Sarutahiko"));
		demonList.push_back(Demon(49, Jirae, "Titan"));
		demonList.push_back(Demon(55, Jirae, "Gogmagog"));
		break;
	case Mitama:
		demonList.push_back(Demon(25, Mitama, "Ara"));
		demonList.push_back(Demon(29, Mitama, "Nigi"));
		demonList.push_back(Demon(32, Mitama, "Kusi"));
		demonList.push_back(Demon(35, Mitama, "Saki"));
		break;
	case Night:
		demonList.push_back(Demon(8, Night, "Lilim"));
		demonList.push_back(Demon(18, Night, "Nyx"));
		demonList.push_back(Demon(25, Night, "Black Frost"));
		demonList.push_back(Demon(37, Night, "Queen Mab"));
		demonList.push_back(Demon(47, Night, "Loa"));
		demonList.push_back(Demon(53, Night, "Kaiwan"));
		demonList.push_back(Demon(56, Night, "Succubus"));
		demonList.push_back(Demon(66, Night, "Incubus"));
		demonList.push_back(Demon(70, Night, "Fomor"));
		demonList.push_back(Demon(80, Night, "Lilim"));
		break;
	case Snake:
		demonList.push_back(Demon(14, Snake, "Nozuchi"));
		demonList.push_back(Demon(28, Snake, "Naga"));
		demonList.push_back(Demon(34, Snake, "Mizuchi"));
		demonList.push_back(Demon(37, Snake, "Raja Naga"));
		demonList.push_back(Demon(55, Snake, "Quetzalcoatl"));
		demonList.push_back(Demon(66, Snake, "Yurlungur"));
		break;
	case Yoma:
		demonList.push_back(Demon(8, Yoma, "Asparas"));
		demonList.push_back(Demon(14, Yoma, "Isora"));
		demonList.push_back(Demon(19, Yoma, "Koppa"));
		demonList.push_back(Demon(23, Yoma, "Dis"));
		demonList.push_back(Demon(28, Yoma, "Karasu"));
		demonList.push_back(Demon(37, Yoma, "Onkot"));
		demonList.push_back(Demon(44, Yoma, "Jinn"));
		demonList.push_back(Demon(48, Yoma, "Purski"));
		demonList.push_back(Demon(52, Yoma, "Efreet"));
		break;
	}
}

DemonType GetDemonType(DemonType type1, DemonType type2)
{
	DemonType returnType = None;

	// If either types are elemental, mitama, or none, return none
	if (type1 == Elemental || type2 == Elemental ||
		type1 == Mitama || type2 == Mitama ||
		type1 == None || type2 == None)
		return None;

	// Check if first type passed is fiend
	if (type1 == Fiend)
	{
		// Fiends can't fuse with other fiends, return none
		if (type2 == Fiend)
			return None;

		// Swap types, this way I can prevent the last check and get the same result, cutting 90 lines of code
		type1 = type2;
		type2 = Fiend;
	}

	// If the numerical value of type 1 is greater than type 2
	if ((int)type1 > (int)type2)
	{
		/*	It means the combination we want to do has already been done the other way around
		 *	EG
		 *	type1 = Deity, type2 = Holy
		 *	We leave this as it is, the result is Megami
		 *	Now, if type1 = Holy, and type2 = Deity, we still get Megami
		 *	Because we've worked this out using the DemonType with the lower value (in this case, Deity)
		 *	We can just inverse the 2 and get the same result
		 *	This simple check has cut ~1200 lines of code.
		 */

		DemonType temp = type1;
		type1 = type2;
		type2 = temp;
	}

	/*	TODO
	 *	Finish off the combinations
	 *	When they're done, comment done by case
	 *	When they're checked, change done to checked
	 */
	switch (type1)
	{
	case Deity:		// Done!
		switch (type2)
		{
		case Deity:
			returnType = None;
			break;
		case Megami:
			returnType = None;
			break;
		case Fury:
			returnType = None;
			break;
		case Lady:
			returnType = None;
			break;
		case Kishin:
			returnType = Fury;
			break;
		case Holy:
			returnType = Megami;
			break;
		case Yoma:
			returnType = Megami;
			break;
		case Fairy:
			returnType = Night;
			break;
		case Divine:
			returnType = Megami;
			break;
		case Fallen:
			returnType = Lady;
			break;
		case Snake:
			returnType = Kishin;
			break;
		case Beast:
			returnType = Avatar;
			break;
		case Jirae:
			returnType = Brute;
			break;
		case Brute:
			returnType = Kishin;
			break;
		case Femme:
			returnType = Lady;
			break;
		case Vile:
			returnType = None;
			break;
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Vile;
			break;
		case Wilder:
			returnType = None;
			break;
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Megami;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = Megami;
			break;
		case Avian:
			returnType = Megami;
			break;
		case Raptor:
			returnType = Tyrant;
			break;
		case Entity:
			returnType = Megami;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Megami:	// Done!
		switch (type2)
		{
		case Megami:
			returnType = None;
			break;
		case Fury:
			returnType = Deity;
			break;
		case Lady:
			returnType = Fury;
			break;
		case Kishin:
			returnType = Lady;
			break;
		case Holy:
			returnType = Divine;
			break;
		case Yoma:
			returnType = Kishin;
			break;
		case Fairy:
			returnType = Fallen;
			break;
		case Divine:
			returnType = Holy;
			break;
		case Fallen:
			returnType = Divine;
			break;
		case Snake:
			returnType = Fairy;
			break;
		case Beast:
			returnType = Holy;
			break;
		case Jirae:
			returnType = Lady;
			break;
		case Brute:
			returnType = Femme;
			break;
		case Femme:
			returnType = Fairy;
			break;
		case Vile:
			returnType = Fury;
			break;
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Fallen;
			break;
		case Wilder:
			returnType = Vile;
			break;
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = Deity;
			break;
		case Wargod:
			returnType = Deity;
			break;
		case Genma:
			returnType = Divine;
			break;
		case Dragon:
			returnType = Avatar;
			break;
		case Avatar:
			returnType = Deity;
			break;
		case Avian:
			returnType = Deity;
			break;
		case Raptor:
			returnType = Tyrant;
			break;
		case Entity:
			returnType = Deity;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Fury:		// Done!
		switch (type2)
		{
		case Fury:
			returnType = None;
			break;
		case Lady:
			returnType = Vile;
			break;
		case Kishin:
			returnType = Lady;
			break;
		case Holy:
			returnType = Kishin;
			break;
		case Yoma:
			returnType = Holy;
			break;
		case Fairy:
			returnType = Brute;
			break;
		case Divine:
			returnType = Divine;
			break;
		case Fallen:
			returnType = Vile;
			break;
		case Snake:
			returnType = Kishin;
			break;
		case Beast:
			returnType = Avatar;
			break;
		case Jirae:
			returnType = Femme;
			break;
		case Brute:
			returnType = Lady;
			break;
		case Femme:
			returnType = Lady;
			break;
		case Vile:
			returnType = Tyrant;
			break;
		case Tyrant:
			returnType = Deity;
			break;
		case Night:
			returnType = Lady;
			break;
		case Wilder:
			returnType = None;
			break;
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = Vile;
			break;
		case Wargod:
			returnType = Deity;
			break;
		case Genma:
			returnType = Lady;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = Holy;
			break;
		case Avian:
			returnType = Kishin;
			break;
		case Raptor:
			returnType = Tyrant;
			break;
		case Entity:
			returnType = Lady;
			break;
		case Fiend:
			returnType = Deity;
			break;
		}
		break;
	case Lady:		// Done!
		switch (type2)
		{
		case Lady:
			returnType = None;
			break;
		case Kishin:
			returnType = Fury;
			break;
		case Holy:
			returnType = Avatar;
			break;
		case Yoma:
			returnType = Night;
			break;
		case Fairy:
			returnType = Yoma;
			break;
		case Divine:
			returnType = Megami;
			break;
		case Fallen:
			returnType = Fury;
			break;
		case Snake:
			returnType = Femme;
			break;
		case Beast:
			returnType = Snake;
			break;
		case Jirae:
			returnType = Beast;
			break;
		case Brute:
			returnType = Fury;
			break;
		case Femme:
			returnType = Kishin;
			break;
		case Vile:
			returnType = None;
			break;
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Kishin;
			break;
		case Wilder:
			returnType = Haunt;
			break;
		case Haunt:
			returnType = Vile;
			break;
		case Foul:
			returnType = Vile;
			break;
		case Seraph:
			returnType = Deity;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Femme;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = Fury;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Kishin;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Kishin:	// Done!
		switch (type2)
		{
		case Kishin:
			returnType = None;
			break;
		case Holy:
			returnType = Lady;
			break;
		case Yoma:
			returnType = Femme;
			break;
		case Fairy:
			returnType = Brute;
			break;
		case Divine:
			returnType = Vile;
			break;
		case Fallen:
			returnType = Night;
			break;
		case Snake:
			returnType = Femme;
			break;
		case Beast:
			returnType = Holy;
			break;
		case Jirae:
			returnType = Snake;
			break;
		case Brute:
			returnType = Snake;
			break;
		case Femme:
			returnType = Lady;
			break;
		case Vile:
			returnType = None;
			break;
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Femme;
			break;
		case Wilder:
			returnType = None;
			break;
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = Divine;
			break;
		case Wargod:
			returnType = Fury;
			break;
		case Genma:
			returnType = Megami;
			break;
		case Dragon:
			returnType = Fury;
			break;
		case Avatar:
			returnType = Holy;
			break;
		case Avian:
			returnType = Lady;
			break;
		case Raptor:
			returnType = Tyrant;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Holy:		// Done!
		switch (type2)
		{
		case Holy:
			returnType = Elemental;
			break;
		case Yoma:
			returnType = Divine;
			break;
		case Fairy:
			returnType = Megami;
			break;
		case Divine:
			returnType = Fairy;
			break;
		case Fallen:
			returnType = Beast;
			break;
		case Snake:
			returnType = Kishin;
			break;
		case Beast:
			returnType = Avatar;
			break;
		case Jirae:
			returnType = Beast;
			break;
		case Brute:
			returnType = Femme;
			break;
		case Femme:
			returnType = Lady;
			break;
		case Vile:
			returnType = None;
			break;
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Fairy;
			break;
		case Wilder:
			returnType = None;
			break;
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = Divine;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Yoma;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = Megami;
			break;
		case Avian:
			returnType = Lady;
			break;
		case Raptor:
			returnType = Wilder;
			break;
		case Entity:
			returnType = Kishin;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Yoma:		// Done!
		switch (type2)
		{
		case Yoma:
			returnType = Elemental;
			break;
		case Fairy:
			returnType = Holy;
			break;
		case Divine:
			returnType = Snake;
			break;
		case Fallen:
			returnType = Jirae;
			break;
		case Snake:
			returnType = Night;
			break;
		case Beast:
			returnType = Fallen;
			break;
		case Jirae:
			returnType = Beast;
			break;
		case Brute:
			returnType = Femme;
			break;
		case Femme:
			returnType = Brute;
			break;
		case Vile:
			returnType = Jirae;
			break;
		case Tyrant:
			returnType = Night;
			break;
		case Night:
			returnType = Divine;
			break;
		case Wilder:
			returnType = Beast;
			break;
		case Haunt:
			returnType = Jirae;
			break;
		case Foul:
			returnType = Snake;
			break;
		case Seraph:
			returnType = Megami;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = None;
			break;
		case Dragon:
			returnType = Avatar;
			break;
		case Avatar:
			returnType = Divine;
			break;
		case Avian:
			returnType = Night;
			break;
		case Raptor:
			returnType = Haunt;
			break;
		case Entity:
			returnType = Megami;
			break;
		case Fiend:
			returnType = Night;
			break;
		}
		break;
	case Fairy:		// Done
		switch (type2)
		{
		case Fairy:
			returnType = Elemental;
			break;
		case Divine:
			returnType = Megami;
			break;
		case Fallen:
			returnType = Yoma;
			break;
		case Snake:
			returnType = Yoma;
			break;
		case Beast:
			returnType = Divine;
			break;
		case Jirae:
			returnType = Yoma;
			break;
		case Brute:
			returnType = Night;
			break;
		case Femme:
			returnType = Haunt;
			break;
		case Vile:
			returnType = Night;
			break;
		case Tyrant:
			returnType = Night;
			break;
		case Night:
			returnType = Snake;
			break;
		case Wilder:
			returnType = Yoma;
			break;
		case Haunt:
			returnType = Night;
			break;
		case Foul:
			returnType = Haunt;
			break;
		case Seraph:
			returnType = Holy;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = None;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = Divine;
			break;
		case Avian:
			returnType = Night;
			break;
		case Raptor:
			returnType = Haunt;
			break;
		case Entity:
			returnType = Megami;
			break;
		case Fiend:
			returnType = Night;
			break;
		case Elemental:
			returnType = None;
			break;
		case Mitama:
			returnType = None;
			break;
		}
		break;
	case Divine:	// Done
		switch (type2)
		{
		case Divine:
			returnType = Elemental;
			break;
		case Fallen:
			returnType = Vile;
			break;
		case Snake:
			returnType = Fairy;
			break;
		case Beast:
			returnType = Holy;
			break;
		case Jirae:
			returnType = Night;
			break;
		case Brute:
			returnType = Yoma;
			break;
		case Femme:
			returnType = Beast;
			break;
		case Vile:
			returnType = Fallen;
			break;
		case Tyrant:
			returnType = Vile;
			break;
		case Night:
			returnType = Snake;
			break;
		case Wilder:
			returnType = Fallen;
			break;
		case Haunt:
			returnType = Jirae;
			break;
		case Foul:
			returnType = Fairy;
			break;
		case Seraph:
			returnType = Megami;
			break;
		case Wargod:
			returnType = Holy;
			break;
		case Genma:
			returnType = Megami;
			break;
		case Dragon:
			returnType = Megami;
			break;
		case Avatar:
			returnType = Megami;
			break;
		case Avian:
			returnType = Snake;
			break;
		case Raptor:
			returnType = Foul;
			break;
		case Entity:
			returnType = Megami;
			break;
		case Fiend:
			returnType = Vile;
			break;
		}
		break;
	case Fallen:	// Done
		switch (type2)
		{
		case Fallen:
			returnType = Elemental;
			break;
		case Snake:
			returnType = Beast;
			break;
		case Beast:
			returnType = Night;
			break;
		case Jirae:
			returnType = Brute;
			break;
		case Brute:
			returnType = Jirae;
			break;
		case Femme:
			returnType = Wilder;
			break;
		case Vile:
			returnType = Brute;
			break;
		case Tyrant:
			returnType = Fury;
			break;
		case Night:
			returnType = Haunt;
			break;
		case Wilder:
			returnType = Night;
			break;
		case Haunt:
			returnType = Night;
			break;
		case Foul:
			returnType = Vile;
			break;
		case Seraph:
			returnType = Lady;
			break;
		case Wargod:
			returnType = Lady;
			break;
		case Genma:
			returnType = Lady;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = Divine;
			break;
		case Avian:
			returnType = Snake;
			break;
		case Raptor:
			returnType = Foul;
			break;
		case Entity:
			returnType = Kishin;
			break;
		case Fiend:
			returnType = Fury;
			break;
		}
		break;
	case Snake:		// Done
		switch (type2)
		{
		case Snake:
			returnType = Elemental;
			break;
		case Beast:
			returnType = Brute;
			break;
		case Jirae:
			returnType = Fallen;
			break;
		case Brute:
			returnType = Beast;
			break;
		case Femme:
			returnType = Kishin;
			break;
		case Vile:
			returnType = Kishin;
			break;
		case Tyrant:
			returnType = Brute;
			break;
		case Night:
			returnType = Fallen;
			break;
		case Wilder:
			returnType = Night;
			break;
		case Haunt:
			returnType = Brute;
			break;
		case Foul:
			returnType = Fallen;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Femme;
			break;
		case Dragon:
			returnType = Lady;
			break;
		case Avatar:
			returnType = Lady;
			break;
		case Avian:
			returnType = Kishin;
			break;
		case Raptor:
			returnType = Foul;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = Brute;
			break;
		}
		break;
	case Beast:		// Done
		switch (type2)
		{
		case Beast:
			returnType = Elemental;
			break;
		case Jirae:
			returnType = Yoma;
			break;
		case Brute:
			returnType = Femme;
			break;
		case Femme:
			returnType = Foul;
			break;
		case Vile:
			returnType = Foul;
			break;
		case Tyrant:
			returnType = Night;
			break;
		case Night:
			returnType = Fairy;
			break;
		case Wilder:
			returnType = Jirae;
			break;
		case Haunt:
			returnType = Wilder;
			break;
		case Foul:
			returnType = Wilder;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = Holy;
			break;
		case Genma:
			returnType = Fairy;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = Snake;
			break;
		case Avian:
			returnType = Femme;
			break;
		case Raptor:
			returnType = Wilder;
			break;
		case Entity:
			returnType = Holy;
			break;
		case Fiend:
			returnType = Night;
			break;
		}
		break;
	case Jirae:		// Done
		switch (type2)
		{
		case Jirae:
			returnType = Elemental;
			break;
		case Brute:
			returnType = Fairy;
			break;
		case Femme:
			returnType = Wilder;
			break;
		case Vile:
			returnType = Haunt;
			break;
		case Tyrant:
			returnType = Wilder;
			break;
		case Night:
			returnType = Foul;
			break;
		case Wilder:
			returnType = Brute;
			break;
		case Haunt:
			returnType = Vile;
			break;
		case Foul:
			returnType = Femme;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Lady;
			break;
		case Dragon:
			returnType = Kishin;
			break;
		case Avatar:
			returnType = Lady;
			break;
		case Avian:
			returnType = Kishin;
			break;
		case Raptor:
			returnType = Kishin;
			break;
		case Entity:
			returnType = Kishin;
			break;
		case Fiend:
			returnType = Wilder;
			break;
		}
		break;
	case Brute:		// Done
		switch (type2)
		{
		case Brute:
			returnType = Elemental;
			break;
		case Femme:
			returnType = Beast;
			break;
		case Vile:
			returnType = Haunt;
			break;
		case Tyrant:
			returnType = Haunt;
			break;
		case Night:
			returnType = Kishin;
			break;
		case Wilder:
			returnType = Fairy;
			break;
		case Haunt:
			returnType = Foul;
			break;
		case Foul:
			returnType = Wilder;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Divine;
			break;
		case Dragon:
			returnType = Night;
			break;
		case Avatar:
			returnType = Kishin;
			break;
		case Avian:
			returnType = Kishin;
			break;
		case Raptor:
			returnType = Fury;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = Haunt;
			break;
		}
		break;
	case Femme:		// Done
		switch (type2)
		{
		case Femme:
			returnType = Elemental;
			break;
		case Vile:
			returnType = Brute;
			break;
		case Tyrant:
			returnType = Lady;
			break;
		case Night:
			returnType = Jirae;
			break;
		case Wilder:
			returnType = Fallen;
			break;
		case Haunt:
			returnType = Foul;
			break;
		case Foul:
			returnType = Wilder;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Night;
			break;
		case Dragon:
			returnType = Night;
			break;
		case Avatar:
			returnType = Kishin;
			break;
		case Avian:
			returnType = Brute;
			break;
		case Raptor:
			returnType = Foul;
			break;
		case Entity:
			returnType = Lady;
			break;
		case Fiend:
			returnType = Lady;
			break;
		}
		break;
	case Vile:		// Done
		switch (type2)
		{
		case Vile:
			returnType = None;
			break;
		case Tyrant:
			returnType = Fury;
			break;
		case Night:
			returnType = Lady;
			break;
		case Wilder:
			returnType = Foul;
			break;
		case Haunt:
			returnType = Foul;
			break;
		case Foul:
			returnType = Haunt;
			break;
		case Seraph:
			returnType = Divine;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Yoma;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = Deity;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Fury;
			break;
		case Entity:
			returnType = None;
			break;
		case Fiend:
			returnType = Fury;
			break;
		}
		break;
	case Tyrant:	// Done
		switch (type2)
		{
		case Tyrant:
			returnType = None;
			break;
		case Night:
			returnType = Lady;
			break;
		case Wilder:
			returnType = Night;
			break;
		case Haunt:
			returnType = Foul;
			break;
		case Foul:
			returnType = Haunt;
			break;
		case Seraph:
			returnType = Fallen;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Yoma;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = None;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Fury;
			break;
		case Entity:
			returnType = None;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Night:		// Done
		switch (type2)
		{
		case Night:
			returnType = Elemental;
			break;
		case Wilder:
			returnType = Beast;
			break;
		case Haunt:
			returnType = Yoma;
			break;
		case Foul:
			returnType = Brute;
			break;
		case Seraph:
			returnType = Fallen;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Holy;
			break;
		case Dragon:
			returnType = Femme;
			break;
		case Avatar:
			returnType = Holy;
			break;
		case Avian:
			returnType = Femme;
			break;
		case Raptor:
			returnType = Vile;
			break;
		case Entity:
			returnType = Brute;
			break;
		case Fiend:
			returnType = Lady;
			break;
		}
		break;
	case Wilder:	// Done
		switch (type2)
		{
		case Wilder:
			returnType = Elemental;
			break;
		case Haunt:
			returnType = Jirae;
			break;
		case Foul:
			returnType = Beast;
			break;
		case Seraph:
			returnType = None;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Yoma;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = None;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Vile;
			break;
		case Entity:
			returnType = Brute;
			break;
		case Fiend:
			returnType = Night;
			break;
		}
		break;
	case Haunt:		// Done
		switch (type2)
		{
		case Haunt:
			returnType = None;
			break;
		case Foul:
			returnType = Brute;
			break;
		case Seraph:
			returnType = Fallen;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = None;
			break;
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = None;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Vile;
			break;
		case Entity:
			returnType = Brute;
			break;
		case Fiend:
			returnType = Foul;
			break;
		}
		break;
	case Foul:		// Done
		switch (type2)
		{
		case Foul:
			returnType = None;
			break;
		case Seraph:
			returnType = Fallen;
			break;
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = None;
			break;
		case Dragon:
			returnType = Snake;
			break;
		case Avatar:
			returnType = None;
			break;
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Vile;
			break;
		case Entity:
			returnType = Brute;
			break;
		case Fiend:
			returnType = Haunt;
			break;
		}
		break;
	case Seraph:	// Done
		switch (type2)
		{
		case Seraph:
			returnType = Elemental;
			break;
		case Wargod:
			returnType = Kishin;
			break;
		case Genma:
			returnType = Megami;
			break;
		case Dragon:
			returnType = Holy;
			break;
		case Avatar:
			returnType = Deity;
			break;
		case Avian:
			returnType = Megami;
			break;
		case Raptor:
			returnType = None;
			break;
		case Entity:
			returnType = Deity;
			break;
		case Fiend:
			returnType = Fallen;
			break;
		}
		break;
	case Wargod:	// Done
		switch (type2)
		{
		case Wargod:
			returnType = None;
			break;
		case Genma:
			returnType = Holy;
			break;
		case Dragon:
			returnType = Lady;
			break;
		case Avatar:
			returnType = Deity;
			break;
		case Avian:
			returnType = Kishin;
			break;
		case Raptor:
			returnType = None;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Genma:		// Done
		switch (type2)
		{
		case Genma:
			returnType = None;
			break;
		case Dragon:
			returnType = Holy;
			break;
		case Avatar:
			returnType = Kishin;
			break;
		case Avian:
			returnType = Megami;
			break;
		case Raptor:
			returnType = Lady;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = Yoma;
			break;
		}
		break;
	case Dragon:	// Done
		switch (type2)
		{
		case Dragon:
			returnType = None;
			break;
		case Avatar:
			returnType = Fury;
			break;
		case Avian:
			returnType = Fury;
			break;
		case Raptor:
			returnType = None;
			break;
		case Entity:
			returnType = Lady;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Avatar:	// Done
		switch (type2)
		{
		case Avatar:
			returnType = None;
			break;
		case Avian:
			returnType = Holy;
			break;
		case Raptor:
			returnType = Wilder;
			break;
		case Entity:
			returnType = Fury;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Avian:		// Done
		switch (type2)
		{
		case Avian:
			returnType = None;
			break;
		case Raptor:
			returnType = Megami;
			break;
		case Entity:
			returnType = Deity;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	case Raptor:	// Done
		switch (type2)
		{
		case Raptor:
			returnType = None;
			break;
		case Entity:
			returnType = Vile;
			break;
		case Fiend:
			returnType = Fury;
			break;
		}
		break;
	case Entity:	// Done
		switch (type2)
		{
		case Entity:
			returnType = None;
			break;
		case Fiend:
			returnType = None;
			break;
		}
		break;
	}

	return returnType;
}
