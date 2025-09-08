#pragma once
#include <iostream>
#include <string>
#include <type_traits>

using std::string;

class Console {

private:
  string userInput = "";
  bool userConfirm = false;

public:
  Console();

  void clearConsole();
  void getInput();
  void outputMessage(string message);
  void getUserConfirmation();
};
