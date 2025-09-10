#include "Console.h"
#include <iostream>

void clearConsole() { std::cout << "\033[2J\033[H"; };

std::string Console::getInput() {
  std::string input;
  std::getline(std::cin, input);
  return input;
};

void Console::outputMessage(std::string &message) {
  std::cout << message + "/n";
};

void Console::pauseForInput() {
  Console::outputMessage("Press enter to continue.");
  std::cin;
}

bool Console::getUserConfirmation() {
  char input;

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
