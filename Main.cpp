#include <iostream>
#include <bitset>
#include "BitFlagImplementation.h"

int main()
{
    BitFlagImplementation bfi;

    int activitySetter = eActivity::dancing | eActivity::walking | eActivity::sleeping;
    int activityTester = eActivity::dancing | eActivity::swimming;  //all must be turned on. if not, will be false

    //Set activity via bitflag
    bfi.toggleActivity(activitySetter);

    //Check activated activities via bitflag
    bool isActivityActive = bfi.isActivityActive(activityTester);

    //Printing
    std::cout << std::bitset<16>(activitySetter) << "  Current flag setting" << "\n";
    std::cout << std::bitset<16>(activityTester) << "  Flag tester" << "\n";
    if (isActivityActive)
        std::cout << "Check if all activated: true" << "\n\n";
    else
        std::cout << "Check if all activated: false" << "\n\n";
    
    //Bitwise AND operation
    std::cout << std::bitset<16>(activitySetter & activityTester) << "  Bitwise AND(&) operation" << "\n\n";
    //Bitwise OR(|) operation
    std::cout << std::bitset<16>(activitySetter | activityTester) << "  Bitwise OR(|) operation" << "\n\n";
    //Bitwise XOR(^) operation
    std::cout << std::bitset<16>(activitySetter ^ activityTester) << "  Bitwise XOR(^) operation" << "\n\n";
    //Bitwise COMPLEMENT(~) operation
    std::cout << std::bitset<16>(~activitySetter) << "  Bitwise COMPLEMENT(~) operation" << "\n\n";
    std::cout << std::bitset<16>(~activityTester) << "  Bitwise COMPLEMENT(~) operation" << "\n\n";

    return 0;
}