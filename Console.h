#pragma once
#include <string>
#include <vector>

namespace Console {

void clearConsole();
std::string getInput();
void outputMessage(const std::string &message);
void pauseForInput();
bool getUserConfirmation(char input);
bool validateUserInput(const std::vector<std::string> allowedInputs,
                       std::string userInput);

}; // namespace Console
