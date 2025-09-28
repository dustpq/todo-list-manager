#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace Console {

void clearConsole();
std::string getInput();
void pauseForInput();
bool getUserConfirmation(char input);
bool validateMenuInput(const std::vector<std::string> allowedInputs,
                       std::string userInput);

template <typename... Args> void outputMessage(Args &&...args) {
  std::ostringstream oss;
  (oss << ... << args);
  std::cout << oss.str();
};
}; // namespace Console
