// Roman.cpp
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Roman.h"











// Default constructor
Roman::Roman() : romanNumeral("I"), integerValue(1) {}

// Parameterized constructor
Roman::Roman(const std::string& numeral) : romanNumeral(numeral) {}
Roman::Roman(int value) : integerValue(value) {}

//Print Integer of numeral
void Roman::printDec()const {
    std::cout << integerValue << std::endl;
}

//Print Integer of numeral
void Roman::printRoman()const {
    std::cout << romanNumeral << std::endl;
}

//Return integer
int Roman::getInt() const {
    return integerValue;
}

//Return Roman Numeral string
std::string Roman::getRoman() const {
    return romanNumeral;
}