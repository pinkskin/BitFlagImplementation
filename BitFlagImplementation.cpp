#include "BitFlagImplementation.h"

BitFlagImplementation::BitFlagImplementation()
{
}

//Activate flags using bitwise OR(|)
void BitFlagImplementation::setActivity(int eActivity_newActivity)
{
	/*
	Can be set using the bitwise OR operator:
		activity = walking | dancing;
	*/
	this->activity = eActivity_newActivity;
}

int BitFlagImplementation::getActivity()
{
	return this->activity;
}

//Test flags if they are activated
bool BitFlagImplementation::isActivityActive(int eActivity_activitiesToCheck)
{
	/*
	Can be tested using the bitwise AND operator:
		activity = walking | dancing;
		1 if (activity & activityFlagsToCheck[walking])	{} // true
		2 if (activity & activityFlagsToCheck[swimming]){} // false 
	*/

	int activityAnd = this->activity & eActivity_activitiesToCheck;
	if (activityAnd == eActivity_activitiesToCheck)
		return true;
	return false;
}
