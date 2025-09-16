#include "Console.h"
#include <iostream>

namespace Console {

void clearConsole() { std::cout << "\033[2J\033[H"; };

std::string getInput() {
  std::string input;
  std::getline(std::cin, input);
  return input;
};

void outputMessage(const std::string &message) { std::cout << message + "\n"; };

void pauseForInput() {
  Console::outputMessage("Press enter to continue...");
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool getUserConfirmation(char input) {
  switch (input) {
  case 'Y':
    return true;
    break;
  case 'n':
    return false;
    break;
  default:
    return false;
    break;
  }
};

bool validateUserInput(const std::vector<std::string> allowedInputs,
                       std::string userInput) {
  for (std::string inputs : allowedInputs) {
    if (inputs == userInput) {
      return true;
    }
  }
  return false;
};

}; // namespace Console
