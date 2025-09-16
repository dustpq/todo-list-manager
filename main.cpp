#include "Console.h"
#include "Task.h"
#include <iostream>
#include <string>

using std::string;

int main() {

  Console::clearConsole();

  string input1, input2, input3;

  Console::outputMessage("Enter task name: ");
  std::getline(std::cin, input1);
  input1 = Console::getInput();

  Console::outputMessage("Enter task date: ");
  std::getline(std::cin, input1);
  input2 = Console::getInput();

  Console::outputMessage("Enter task time: ");
  std::getline(std::cin, input1);
  input3 = Console::getInput();

  Task task(input1, input2, input3);

  Console::outputMessage("Created task:\n" + "Task name: " + task.getName() +
                         "\nTask Date: " + task.getDate() +
                         "\nTask Time: " + task.getTime());

  Console::pauseForInput();

  return 0;
}
