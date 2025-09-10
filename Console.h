#pragma once
#include <string>

namespace Console {

void clearConsole();
std::string getInput();
void outputMessage(const std::string &message);
void pauseForInput();
bool getUserConfirmation();

}; // namespace Console
