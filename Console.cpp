#include "Console.h"
#include <iostream>
#include <string>

using std::string;

void clearConsole() { std::cout << "\033[2J\033[H"; };

void Console::getInput() { std::cin >> Console::userInput; };
