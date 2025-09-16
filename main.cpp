#include "Console.h"
#include "Task.h"
#include <iostream>
#include <string>

using std::string;

int main() {

  Console::clearConsole();

  string input1, input2, input3;

  std::cout << "Enter task name: ";
  std::getline(std::cin, input1);

  std::cout << "Enter task date: ";
  std::getline(std::cin, input2);

  std::cout << "Enter task time: ";
  std::getline(std::cin, input3);

  Task task1(input1, input2, input3);

  std::cout << "You have made a task with the following attributes:\n";
  std::cout << "Name: " + task1.getName() + "\nDate: " + task1.getDate() +
                   "\nTime: " + task1.getTime();

  return 0;
}
