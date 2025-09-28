#include "Console.h"
#include "Task.h"
#include <string>

using std::string;

int main() {

  Console::clearConsole();

  string input1, input2, input3;

  Console::outputMessage("Enter task name: ");
  input1 = Console::getInput();

  Console::outputMessage("Enter task date: ");
  input2 = Console::getInput();

  Console::outputMessage("Enter task time: ");
  input3 = Console::getInput();

  Task task(input1, input2, input3);

  Console::outputMessage("Created task:\nTask name: ", task.getName(),
                         "\nTask Date: ", task.getDate(),
                         "\nTask Time: ", task.getTime(), "\n");

  Console::pauseForInput();

  return 0;
}
