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