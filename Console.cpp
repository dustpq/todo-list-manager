#include "Console.h"
#include <iostream>

void clearConsole() { std::cout << "\033[2J\033[H"; };

void Console::getInput() { std::cin >> Console::userInput; };
