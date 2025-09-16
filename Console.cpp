#include "Console.h"
#include <iostream>

void clearConsole() { std::cout << "\033[2J\033[H"; };

std::string Console::getInput() {
  std::string input;
  std::getline(std::cin, input);
  return input;
};

void Console::outputMessage(const std::string &message) {
  std::cout << message + "/n";
};

void Console::pauseForInput() {
  Console::outputMessage("Press enter to continue...");
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool Console::getUserConfirmation(char input) {
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

bool Console::validateUserInput(const std::vector<std::string> allowedInputs,
                                std::string userInput) {
  for (std::string inputs : allowedInputs) {
    if (inputs == userInput) {
      return true;
    }
  }
  return false;
};
