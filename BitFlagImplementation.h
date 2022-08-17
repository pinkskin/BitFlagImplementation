#pragma once

#include <iostream>

enum eActivity
{
    walking     = 1 << 0,   // binary 00001
    running     = 1 << 1,   // binary 00010
    swimming    = 1 << 2,   // binary 00100
    sleeping    = 1 << 3,   // binary 01000
    dancing     = 1 << 4    // binary 10000
};

class BitFlagImplementation
{
public:
    //CONSTRUCTOR
	BitFlagImplementation();

    void toggleActivity(int eActivity_toToggle);
    void untoggleActivity(int eActivity_toUntoggle);
    int getActivity();
    bool isActivityActive(int eActivity_activitiesToCheck);

private:
    int activity = 0;

protected:

};