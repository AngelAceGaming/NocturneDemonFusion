#include "stdafx.h"
#include "DemonFusion.h"

Demon GetDemonResult(Demon* demon1, Demon* demon2)
{
	// Get the type of demon that the 2 demons passed in will make
	DemonType resultType = GetDemonType(demon1->type, demon2->type);

	// Checks we have a result
	if (resultType != None)
	{
		// Work out the level that the result should be no lower than
		int resultLevel = (demon1->level + demon2->level) / 2;

		// Get a list of all possible demons
		vector<Demon> demonResults = GetDemonList(resultType);

		// Run through that list until we find the lowest level demon that can be fused for our result
		for (int i = 0; i < (int)demonResults.size(); i++)
		{
			if (demonResults[i].level >= resultLevel)
				return demonResults[i];
		}
	}
	return Demon(0, None, "Invalid demon");
}